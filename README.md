# Chương Trình Quản Lý Thư Viện

- Môn học: Đồ án Tin học
- Giảng viên hướng dẫn: Lương An Vinh
- Sinh viên thực hiện:
  Huỳnh Hoàng Gia Phú - MSSV: DH52113030
  

---

## Tổng quan dự án

**Quản lý Thư viện** là một ứng dụng Console được phát triển bằng ngôn ngữ **C++**, hướng đến việc giải quyết bài toán quản lý và vận hành thực tế của một thư viện. Điểm cốt lõi của dự án là việc tự xây dựng các cấu trúc dữ liệu (CTDL) nền tảng và quản lý lưu trữ trực tiếp thông qua hệ thống tệp tin (File I/O) với cả định dạng nhị phân và văn bản, hoàn toàn không sử dụng Hệ quản trị Cơ sở dữ liệu (CSDL) truyền thống.

## Điểm nổi bật về Kỹ thuật

Dự án không chỉ dừng lại ở các thao tác CRUD (Thêm, Đọc, Sửa, Xóa) cơ bản mà còn tích hợp các giải thuật tối ưu nhằm nâng cao trải nghiệm người dùng:
- **Tìm kiếm thông minh:** Ứng dụng cấu trúc **Trie** để xây dựng tính năng Autocomplete, cho phép tìm kiếm sách theo tiền tố tên một cách tức thời.
- **Hệ thống gợi ý:** Ứng dụng lý thuyết **Đồ thị** để phân tích và đề xuất các đầu sách có cùng thể loại cho độc giả.
- **Quản lý dữ liệu an toàn:** Tự động hóa quá trình đọc/ghi file nhị phân `.dat` để tối ưu dung lượng và tốc độ, kết hợp xuất báo cáo `.txt` và tính năng sao lưu (Backup) dữ liệu.

## Các phân hệ chức năng

Hệ thống bao phủ toàn bộ quy trình nghiệp vụ của thư viện, được chia thành các nhóm chính:
- **Quản lý danh mục:** Quản lý thông tin Sách (ISBN, tên, thể loại...) và Độc giả (thông qua CMND), hỗ trợ Import/Export dữ liệu.
- **Nghiệp vụ mượn trả:** Lập phiếu mượn, xử lý trả sách, kiểm tra các ràng buộc và tự động tính toán tiền phạt đối với các trường hợp quá hạn.
- **Thống kê & Báo cáo:** Trích xuất các số liệu quan trọng như lượt mượn theo tháng/thể loại, cùng bảng xếp hạng Top 10 sách và độc giả mượn nhiều nhất.

---
## Cấu trúc thư mục

```text
LibraryManagement/
├── include/      # các file header (.h)
├── src/          # các file source code (.cpp)
├── data/         # file dữ liệu mẫu (.dat, .txt)
├── docs/         # báo cáo (SRS.pdf, Design.pdf), hình ảnh, sơ đồ
├── tests/        # các file test case
├── Makefile
└── README.md


---

##  Tiến độ thực hiện (Checklist)

| Tuần | Checklist |
| :--- | :--- |
| **1** | - [ ] Repo Git <br> - [ ] SRS.pdf <br> - [ ] Cấu trúc thư mục |
| **2** | - [ ] Design.pdf <br> - [ ] Sơ đồ lớp <br> - [ ] Định nghĩa struct |
| **3** | - [ ] AVL <br> - [ ] BST <br> - [ ] Test quản lý sách |
| **4** | - [ ] Hash Table <br> - [ ] Test quản lý độc giả |
| **5** | - [ ] LinkedList <br> - [ ] Dynamic Array <br> - [ ] File I/O |
| **6** | - [ ] Mượn sách <br> - [ ] Trả sách <br> - [ ] Tính phạt |
| **7** | - [ ] Graph <br> - [ ] BFS/DFS <br> - [ ] Thống kê top 10 |
| **8** | - [ ] CTDL mới <br> - [ ] Tích hợp <br> - [ ] Demo |
| **9** | - [ ] Unit test <br> - [ ] Bảng so sánh <br> - [ ] User manual |
| **10** | - [ ] Báo cáo <br> - [ ] Video <br> - [ ] Slide <br> - [ ] Nộp + ký |

