# Order Conditions & Loops
---
### 1. Conditions statement
Usually, this kind of logic is implemented using an `if` statement. The condition is written after `if`. If the condition is `True`, the main block of code runs; otherwise, the program continues or runs an alternative block.
```python
a = 20
b = 40

if (a/b > 1):
    print(Higher)
else:
    print(Lower)
```
### 2. Loops
To access elements in lists and similar data types, we use loops.
#### 2.1 For
##### 2.1.1 List data
```python
my_list = [1,2,3,4,5,6,7,8,9]
for x in my_list:
    print(x)
```
##### 2.1.2 Tuple data
```python
people = (('Ali', 23), ('John', 45), ('Sara', 28))
for person in people:
    name, age = person
    print(f'{name} is {age} year old.')
```
##### 2.1.3 dict data
```python
info = {
    'Ali': (23, 170),
    'John': (24, 177),
    'Jack': (40, 184),
    'Sara': (33, 166),
}
   
for key in info:
    print(f"{key} is {info[key][0]} year old and him height is 
    {info[key][1]}.")
    
for person, data in info.items():
    print(person, data)
```
#### 2.2 While
A `while` loop keeps running as long as the condition is `True`. The code inside the block will continue to execute until the condition becomes `False`.
```python
a = 0
while a<=5:
    print (f'a is {a}')
    a += 1

print(f'finishing with {a}')
```
Sometimes, we don't want a loop to finish normally. In such cases, we can use `break` to exit the loop early, `continue` to skip the current iteration, or use `pass` as a placeholder for future code.
```python
for _ in range(10):
    pass

for i in range(10):
    if i == 5:
        break;
        print(i)

for n in range(20):
    if i % 3 == 0:
        continue
    print(i)
```
#### 2.3 List comprehension
Sometimes, we can use loops to create a list.
```python
one_list = [0,2,4,6,8,10]
two_list = []

for x in one_list:
    two_list.append(x ** 2)
print(two_list)
```
Advance code
```python
one_list = [0,2,4,6,8,10]
two_list = [x ** 2 for x in one_list]

three_list = ['even' if x%2==0 else 'odd' for x in one_list]
```
#### 2.4 Self Study

##### 2.4.1 `range(start, stop, step)`
The `range()` function generates a sequence of numbers. It is commonly used with `for` loops when you want to repeat an operation a specific number of times.
- The `start` is The first number in the sequence. It is optional and defaults to `0`. 
- The `stop` is The end of the sequence. This value is **not included**. 
- The `step` is The amount by which the number changes each time. It is optional and defaults to `1`.
```python
range(start, stop, step)
```
##### 2.4.2 `enumerate(iterable, start=0)`
The `enumerate()` function allows you to iterate over a sequence while getting both the **index** and the **value** of each element. It is especially useful when you need to know the position of an item while looping through a list.
- **`iterable`**: The sequence you want to iterate over.
- **`start`**: The starting index. It defaults to `0`.
##### 2.4.3 `zip()`
The `zip()` function combines elements from two or more iterable based on their positions. In other words, it pairs the first elements together, the second elements together, and so on.
```python
names = ["Ali", "Sara", "John"]
ages = [20, 22, 25]

for name, age in zip(names, ages):
    print(name, age)
```
