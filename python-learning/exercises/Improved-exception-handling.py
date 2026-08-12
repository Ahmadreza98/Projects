def divide(a, b):
    result = a / b
    return result


while True:
    try:
        num1 = int(float(input("Enter first number: ")))
        num2 = int(float(input("Enter second number: ")))
        print("Result", divide(num1, num2))
    except ZeroDivisionError as e:
        print(f"The Error is: {e}")
        print(f"The num2 is not zero.")
    except ValueError as e:
        print(f"The Error is ValueError.")
        print("Please don't enter string for num1 and num2.")
    else:
        pass
    finally:
        print("The program run successful.")
