1.
output của đoạn code đã cho là:
	*p3=B, p3=0x5678
	*p3=A, p3=0x1234
	*p1=B, p1=0x1234
2.
  *p=5
3.
  Lỗi nằm ở việc gán một con trỏ kiểu double cho một biến kiểu char. 
  Hai kiểu dữ liệu này khác nhau về kích thước bộ nhớ mà chúng chiếm giữ và cách dữ liệu được biểu diễn nên việc này là sai.
