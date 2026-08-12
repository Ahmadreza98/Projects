# Date Types
---
Python, like other languages, supports data types. The following are the types introduced.
### String Data
In generally, the string structure implement with single or double quote. For example:
```python
Name = 'John' or "John"
Full_name = 'John Smith' or "John Smith"
```
The string structure is similar to a "List". We can slice a string into smaller character.
```python
ns = "Hello, I'm John Smith, I'm 22 years old"
ns[0] -> res: H
ns[-1] -> res: d
ns[1:4] -> res: ell
ns[1:5:2] -> res: el
```
To slice, we use three values: `[start:stop:step]`.The step value is optional.
```python
ns = '0123456789'
ns[1:6] -> res: '12345'
ns[1:6:2] -> res: '135'
ns[::-1] -> res: '9876543210'
```
To Complicate string used to 3 double quote.
```python
""" Hi,
my name is John Smith,
I'm 22 years old,
I'm single. """
```
The string is immutable. There are many methods to combine string data with other data types.
```python
Full_name = "John Smith"
print("Hello" + " " + Full_name)
```
This method name is "String Interpolation".
```python
print(f"Hello {Full_name}"
print("Hello {name}, {family} is {age} year old.".format(name=name, 
family=Full_name, age=age))
```
### Numeric Data
##### 1. Simple Data
```python
1. intger:int -> ..., -10, ..., 0 , ..., 10, ...
2. string:str -> 'Ali', "AShmad"
3. float:- -> -1.05, -1.0, 0 , 1.0, 1.05
```
##### 2. Advance Data
```python
1. list -> [ index ] - immutable => included combine simple data.
2. dict -> { key:index } - mutable =>  included combine simple 
data with keyword.
3. tuple -> ( index ) - immutable order => included combine simple data. 
4. set -> set [ index ] - mutable Non-repeating => included combine simple data.
5. boolen -> True (1) or False (0)
```
#### Mathematics Operation
##### 1. plus operate
```python
4 + 5 -> res: 9
12 + 20 -> res: 32
```
##### 2. minus operate
```python
10 - 15 -> res: -5
15 - 4 -> res: 11
```
##### 3. prod operate
```python
4 * 5 -> res: 20
10 * 5 -> res: 50
```
##### 4. divide operate (float)
```python
20 / 4 -> res: 5.0
18/4 -> res: 4.5
18/6 -> res: 3.0
```
##### 5. divide operate (integer)
```python
20 // 4 -> res: 5
18 // 4 -> res: 4
18 // 3 -> res: 3
```
##### 6. mod operate
```python
21 % 5 -> res: 1
23 % 7 -> res: 2
```
##### 7. power operate 
```python
2 ** 3 -> res: 8
3 ** 2 -> res: 9
```
### Boolean Data
Boolean is a logical data type. It represents a result that is either `True` or `False`.
```python
1 > 2 -> res: True: T
2 < 5 -> res: False: F
age = 15
age.isdigit() -> res: T
age = 15.4
age.isdigit() -> res: F
```
Booleans are often used in conditional statements to control the flow of a program.
1. OR
```python
age = 15
name = "John"
if (age => 15) or (name == 'Ali') -> res: T
```
2. AND
```python
age = 15
name = "John"
if (age => 15) and (name == 'Ali') -> res: F
```
3. NOT
```python
age = 15
name = "John"
if NOT (age => 15) -> res: F
```
4. IN
```python
my_list = [1,2,3, 'John',3.14,'Ali']
if 'John' in my_list -> res: T
```
### List Data
One of the oldest data types is the list. It is generally structured  using square brackets `[]`. The elements are separated by commas `,`,and these elements can be of any data type.
```python
my_list = [0,1,2,3,4,"Jhon","Mike","3.14"]
```
### Dictionary (Dict) Data
A dictionary is a data type. It is generally structured with keys and values. This means every value has a corresponding key. To access a value, you need to use its key.
```python
my_dict = {"apple": 20, "benana": 10, "orenage": 5}
my_dict["apple"] -> res: 20
```
One useful feature of dictionaries is that you can use a list as a value.
```python
my_dict = {"apple": [15,20_000,500_000], "benana": 10, "orenage": 5}
my_dict["apple"] -> res: [15,20_000,500_000]
my_dict["apple"][0] -> res: 15
```
### Tuple Data
A tuple is similar to a list in terms of data type. The difference is that it uses parentheses instead of square brackets, and it does not support item assignment. Tuple items are ordered, unchangeable, and allow duplicate values.
```python
thistuple = ("apple", "banana", "cherry", "apple", "cherry")
```
### Set Data
A set is a data type. It is a container that can hold numbers and strings. Keep in mind that all values in a set must be unique—duplicates are not allowed.
```python
my_set = set()
my_set.add(1)
my_set.add(2)
my_set.add("Ali")
my_set.add("Hadi")
```
Also, the `union()` and `intersection()` methods are used to combine or compare two sets. The union method adds elements from both sets, while the intersection method returns only the common elements.
```python
my_set = set(['Ali', 'John', 'Susan'])
your_set = set(['Ali', 'Jack', 'Sara'])
my_name.intersection(your_set) -> res: 'Ali'
my_name.union(your_set) -> res: {'Ali', 'John', 'Susan','Jack', 'Sara'}
```