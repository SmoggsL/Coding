import math
def BMI():
    a = float(input("nhập cân nặng: "))
    b = float(input("nhập chiều cao: "))
    BMI = a/(b*b)
    # print("Chỉ số BMI: ", BMI)
    return BMI
c = BMI()
print("Chỉ số BMI: ", c)
def PhanLoai(BMI):
    if BMI < 18.5:
        return 'Bạn quá gầy'
    elif BMI <= 24.9:
        return  'Bạn bình thường'
    elif BMI <= 29.9:
        return 'Bạn hơi béo'
    elif BMI <= 34.9:
        return 'Bạn béo phì cấp độ 1'
    elif BMI <= 39.9:
        return 'Bạn béo phì cấp độ 2'
    else:
        return 'Bạn béo phì cấp độ 3'
print ("Phân loại: ",PhanLoai(c))