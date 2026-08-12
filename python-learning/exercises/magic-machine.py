mm = int(input())

while mm != 1:
    if mm % 2 == 0:
        mm = int(mm / 2)
    elif mm % 2 != 0:
        mm = mm * 3 + 1
    print(mm)