# Function
---
### 1. Methods
A method in Python is a function that belongs to an object. It performs an action using the object’s data. Objects have data (like a string, list, or dictionary), and methods are built-in tools you can use to work with that data.
```python
list = [1,2,3,4]

list.pop()

print(list) -> res: [1,2,3]
```
### 2. Functions
A function is a block of code that performs a specific task. You can call it whenever you need it, which helps you write cleaner, reusable code. You define a function using the `def` keyword:
```python
def greet():
    print("Hello World")

greet() -> res: "Hello World"
```
Functions can have multiple inputs.
```python
def info(name, age, height):
    print(f"{name} is {age} years old. He's height {height}.")
```
Also, we can return value in function:
```python
def info(name, age, height):
    return f"{name} is {age} years old. He's height {height}."

val = info('Ali', 23, 180)
print(val)
```
Also, we can define a default value for one of the inputs.
```python
def greet(name, message="Hello"):
    print(message, name)
```
Absolutely! Let’s talk about `*args` and `**kwargs` in Python — these are super useful when you want to make flexible functions that can accept any number of inputs.
```python
def add_numbers(*args):
    total = sum(args)
    print("Total:", total)
    
add_numbers(2, 3, 4) -> res: Total: 9
```
```python
def print_info(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print_info(name="Alice", age=25, country="Canada")
```
### 3. Lambda Function
`Lambda` functions in Python are small anonymous functions — perfect for quick, short tasks where you don’t want to define a full function with `def`.
```python
list = [3, 4, 5, 6]

power_num = map(lambda x: x**2, list)
print(power_num)
```