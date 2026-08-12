cost = int(input())

if cost > 50000:
    print(int(cost * 0.8))
elif 20000 < cost <= 50000:
    print(int(cost * 0.9))
else:
    print(cost)
