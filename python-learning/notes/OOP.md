# OOP
---
Object-Oriented Programming (OOP) in Python is a way to structure code using classes and objects, making it modular, reusable, and easier to manage—especially for large projects.
### Class & Object
```python
class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def bark(self):
        print(f"{self.name} says Woof!")

# Creating an object
my_dog = Dog("Buddy", 3)
my_dog.bark()  # Output: Buddy says Woof!
```
- `__init__` is the constructor — runs when object is created.
- `self` refers to the current object (like `this` in other 
  languages).
### Encapsulation (hide internal details)
```python
class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # private attribute

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
```
- Use `__` before a variable to make it "private" (soft enforcement).
### Inheritance (child class inherits from parent)
```python
class Animal:
    def speak(self):
        print("Animal sound")

class Cat(Animal):
    def speak(self):
        print("Meow")

c = Cat()
c.speak()  # Output: Meow
```
- Child class (`Cat`) overrides method from parent (`Animal`).
### Polymorphism (many forms, same interface)
```python
for animal in [Cat(), Dog("Max", 2)]:
    animal.speak()
```
- Even though they're different classes, we can treat them the 
  same way. 
### Abstraction (hide complex logic, show essential)
Can be done via abstract base classes using the `abc` module:
```python
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
```
### Dunder Methods
You're talking about “dunder” methods — short for “double underscore” — often written like `__init__`, `__str__`, `__len__`, etc.
```python
class Book:
    def __init__(self, title, pages):
        self.title = title
        self.pages = pages

    def __str__(self):
        return f"{self.title} ({self.pages} pages)"

    def __len__(self):
        return self.pages


b = Book("Python Basics", 350)
print(b)          # Python Basics (350 pages)
print(len(b))     # 350
```
- Command dunder methods:

|    Method     |     Triggered When You...     |     Example     |
|:-------------:|:-----------------------------:|:---------------:|
|  `__init__`   |       Create an object        | obj = MyClass() |
|   `__str__`   | Print the object (print(obj)) |    str(obj)     |
|  `__repr__`   | Use in shell / logs / repr()  |    repr(obj)    |
|   `__len__`   |         Use len(obj)          | 
| `__getitem__` |    Access like a list/dict    |     obj[0]      |
| `__setitem__` |     Set like a list/dict      |  obj[0] = val   |
|   `__add__`   |        Use + operator         |   obj1 + obj2   |
|   `__eq__`    |            Use ==             |  obj1 == obj2   |

