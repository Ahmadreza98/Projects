def sum_numbers(*args):
    num = 0
    num = sum(args)
    return num


nums =[int(x) for x in input().split(" ")]

print(sum_numbers(*nums))