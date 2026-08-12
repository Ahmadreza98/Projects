count = int(input())
val = int(input())

for _ in range(0,count):
    if val % 2 != 0:
        val = val * 2 - 1
    elif val % 2 == 0:
        val = val / 2
print(int(val))