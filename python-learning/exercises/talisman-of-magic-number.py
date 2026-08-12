val = int(input())

if val % 3 == 0 and val % 5 == 0:
    print("افسانه ای")
elif val % 3 == 0:
    print("جادویی")
elif val % 5 == 0:
    print("نفرین شده")
else:
    print("معمولی")