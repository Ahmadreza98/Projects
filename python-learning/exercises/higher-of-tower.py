def skyline(*args):
    higher = 0
    for t in args:
        if t != "":
            if int(t) > higher:
                higher = int(t)
        else:
            return higher
    return higher


values = input().split(" ")

print(skyline(*values))