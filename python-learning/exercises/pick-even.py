def pick_evens(*args):
    even = []
    for val in args:
        if val % 2 == 0:
            even.append(val)
    return even


nums = [int(x) for x in input().split(" ")]

print(pick_evens(*nums))
