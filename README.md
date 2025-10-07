## Phân tích yêu cầu hệ thống (BBB)

### Mục tiêu
- Giám sát thời gian thực các tài nguyên trọng tâm trên BeagleBone Black (BBB): CPU, RAM, mạng, tốc độ đọc/ghi eMMC/SD (SSD tương đương bộ nhớ khối).
- Hiển thị trạng thái trên ILI9341 (SPI) và lưu log vòng lặp phục vụ phân tích/điều phối.

### Thành phần hệ thống
- Module thu thập dữ liệu: đọc `/proc`, `/sys`, `netlink` (CPU, RAM, mạng), `/proc/diskstats` hoặc `/sys/block/*/stat` (eMMC/SD).
- Module giám sát/phân tích: làm mượt số liệu (trung bình trượt), ngưỡng/cảnh báo.
- Giao diện hiển thị: ILI9341 qua SPI với GPIO DC/RST/BL; cập nhật 100–500 ms.
- Lưu log: ring-log giới hạn kích thước/tuổi trên eMMC/SD để tránh mòn.

### Nguồn dữ liệu (chuẩn BBB)
- CPU: `/proc/stat` → %user/%system/%idle, iowait; load ngắn hạn.
- RAM: `/proc/meminfo` → used/available, buffers/cached, page activity.
- Mạng: `/proc/net/dev` → rx/tx bytes/pps, errs, drops; tùy chọn `ethtool` cho link.
- eMMC/SD (SSD khối): `/proc/diskstats` hoặc `/sys/block/mmcblk0/stat` → sectors read/write, thời gian đọc/ghi; quy đổi throughput MB/s và IOPS.

### Input/Output
- Input: số liệu từ kernel interfaces; sự kiện như mất link/quá ngưỡng.
- Output: khung hiển thị ILI9341, file log, thông tin debug qua SSH/serial.

### Ràng buộc thời gian thực và tần suất
- Chu kỳ lấy mẫu: 100–500 ms (hiển thị), 1–5 s (log dài hạn).
- Độ trễ end-to-end mục tiêu: ≤ 200 ms.
- Ngân sách CPU cho hệ giám sát trên BBB: ≤ 5–10%.

### Chỉ số/KPI theo dõi
- CPU: %util, %iowait, load ngắn hạn.
- RAM: used/available, cache/buffer.
- Mạng: throughput (rx/tx MB/s và pps), lỗi/drops.
- eMMC/SD: throughput đọc/ghi (MB/s), IOPS, latency trung bình (ms) nếu suy ra từ `*stat`.

### Yêu cầu phi chức năng
- Độ tin cậy: tự kiểm tra `/dev/spidevX.Y`, xử lý lỗi SPI/overlay an toàn.
- Bền bỉ lưu trữ: log xoay vòng, giới hạn kích thước/tuổi; tránh ghi dồn dập.
- Khả chuyển: build bằng `arm-linux-gnueabihf-gcc`, deploy qua SSH/SCP hoặc NFS.

---

### Bảng nối chân nhanh (BBB → ILI9341)
P9_22 → SCK
P9_18 → SDI/DIN (MOSI)
P9_21 → SDO/DOUT (MISO, tùy)
P9_17 → CS
P9_15 (GPIO48) → D/C
P9_12 (GPIO60) → RESET
P9_14 (EHRPWM1A) → BL/LED (tùy)
P9_1/P9_2 → GND
P9_3/P9_4 → 3V3