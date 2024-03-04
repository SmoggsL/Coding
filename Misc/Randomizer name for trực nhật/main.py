import random

members = [
    "Vũ Gia Bảo",
    "Nguyễn Thái Dương",
    "Nguyễn Duy Đạt",
    "Phan Minh Đức",
    "Nguyễn Mạnh Hùng",
    "Phạm Thời Ngô Huy",
    "Lê Minh Khải",
    "Trần Đăng Khoa",
    "Trần Anh Khôi",
    "Trương Hoàng Long",
    "Phan Quang Minh",
    "Nguyễn Trung Nam",
    "Châu Tấn Phát",
    "Văn Minh Gia Phúc",
    "Phạm Văn Minh Phúc",
    "Đào Tuấn Sơn",
    "Nguyễn Thị Phương Thảo",
    "Lưu Khang Thịnh",
    "Lê Minh Tiến",
    "Lê Phú Trọng",
    "Nguyễn Đường Gia Truyền",
    "Nguyễn Ngọc Phương Uyên",
    "Nguyễn Hồ Thành Vinh",
]

def tn():
    newmem = members
    # for x in range(4):
    #     for y in ["Mon", "Tue", "Wed", "Thu", "Fri"]:
    a, b = random.choices(newmem)
    print(a, b)