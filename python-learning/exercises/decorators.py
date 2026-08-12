def Decorator(f):
    def wrapper():
        import time
        n = int(input("Enter Number: "))
        x1 = time.time()
        f(n)
        x2 = time.time()
        print(x2 - x1)

    return wrapper


@Decorator
def Create_list(n):
    my_list = []
    for i in range(1, n + 1):
        my_list.append(i)
    print(my_list)


Create_list()