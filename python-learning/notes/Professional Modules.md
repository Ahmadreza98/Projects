# Professional Modules
---
Let's explore the `collections` **module** in Python — it's a powerful standard library that gives you **specialized data structures** beyond the basic `list`, `dict`, `tuple`, and `set`.
### What is collections?
The `collections` module provides high-performance, flexible, and efficient 
container datatypes.
```python
import collections
```
### Commonly Used Classes in `collections`
#### 1. `namedtuple` – Like a `tuple`, but with named fields
```python
from collections import namedtuple

Point = namedtuple("Point", "x y")
p = Point(3, 4)

print(p.x, p.y)  # 3 4
```
> Cleaner than using tuple indexing (`p[0]`, `p[1]`).

#### 2. `Counter` – Counts elements in a collection
```python
from collections import Counter

nums = [1, 2, 2, 3, 3, 3]
c = Counter(nums)

print(c)        # Counter({3: 3, 2: 2, 1: 1})
print(c[2])     # 2
```
> Useful for frequency analysis (like words in text).

#### 3. `defaultdict` – Like a `dict`, but gives default values
```python
from collections import defaultdict

d = defaultdict(int)
d["apple"] += 1

print(d["apple"])   # 1
print(d["banana"])  # 0 (no KeyError!)
```
> Great for counting or grouping.

#### 4. `deque` – Double-ended queue (fast appends/pops from both sides)
```python
from collections import deque

dq = deque([1, 2, 3])
dq.append(4)
dq.appendleft(0)

print(dq)       # deque([0, 1, 2, 3, 4])

dq.pop()        # 4
dq.popleft()    # 0
```
> Much faster than `list` for insertions/removals at the ends.

#### 5. `OrderedDict` – Keeps insertion order (👈 mostly for Python <3.7)
```python
from collections import OrderedDict

od = OrderedDict()
od["a"] = 1
od["b"] = 2

print(od)   # OrderedDict([('a', 1), ('b', 2)])
```
> Note: Since Python 3.7, regular `dict` preserves order too.

### Summary Table
| Class       | Use Case                            |
|-------------|-------------------------------------|
| namedtuple  | Tuple with named fields             |
| Counter     | Count frequency of items            |
| defaultdict | Dict with default factory values    |
| deque       | Efficient double-ended queue        |
| OrderedDict | Ordered dictionary (pre-3.7 mainly) |

### Collections in Real Projects
- Counting word frequency: `Counter`
- Grouping values by keys: `defaultdict(list)`
- Fast queue systems: `deque`
- Returning structured records: `namedtuple`
### What Is `datetime`?
The `datetime` module in Python is your go-to tool for working with **dates, times, and time durations.** It’s super useful for everything from logging timestamps to scheduling tasks or formatting outputs. The `datetime` is a built-in Python module that provides classes for manipulating:
- Date (`datetime.date`)
- Time (`datetime.time`)
- DateTime (`datetime.datetime`)
- Timedelta (differences between dates/times)
```python
import datetime
```
#### 1. Get Today’s Date & Time
```python
from datetime import datetime

now = datetime.now()
print(now)  # Example: 2025-04-10 13:45:12.123456
```
#### 2. Working with Dates
```python
from datetime import date

today = date.today()
print(today)              # 2025-04-10
print(today.year)         # 2025
print(today.month)        # 4
print(today.day)          # 10
```
#### 3. Working with Times
```python
from datetime import time

t = time(14, 30, 0)  # 2:30 PM
print(t.hour)        # 14
print(t.minute)      # 30
```
#### 4. Combine Date and Time
```python
from datetime import datetime

dt = datetime(2025, 4, 10, 15, 45)
print(dt)  # 2025-04-10 15:45:00
```
#### 5. Timedelta (Difference Between Dates/Times)
```python
from datetime import timedelta, date

today = date.today()
future = today + timedelta(days=10)
past = today - timedelta(days=5)

print(future)  # 10 days in the future
print(past)    # 5 days ago
```
#### 6. Formatting Dates and Times
Use strftime() to convert to string:
```python
now = datetime.now()
print(now.strftime("%Y-%m-%d %H:%M:%S"))  # 2025-04-10 14:22:30
```
Common Format Codes:

| Code | Meaning         | Example |
|------|-----------------|---------|
| %Y   | Year (4 digits) | 2025    |
| %m   | Month (01–12)   | 04      |
| %d   | Day of month    | 10      |
| %H   | Hour (24h)      | 14      |
| %M   | Minute          | 22      |
| %S   | Second          | 30      |

#### 7. Parsing Strings into Dates
```python
from datetime import datetime

dt_str = "2025-04-10 14:22:30"
dt = datetime.strptime(dt_str, "%Y-%m-%d %H:%M:%S")
print(dt)  # datetime object
```
### Regular Expression (RegEx)
Let’s dive into **Regular Expressions** (**RegEx**) in Python — they’re like **search superpowers** for matching patterns in strings.
### What is a Regular Expression?
A **Regular Expression** (RegEx) is a sequence of characters that defines a 
**search pattern**.
In Python, you use the `re` module to work with them:
```python
import re
```
### Basic Example
```python
import re

text = "My number is 09123456789"
pattern = r"\d{11}"

match = re.search(pattern, text)

if match:
    print(match.group())  # → 09123456789
```
### Common RegEx Patterns
| Pattern | Matches                           |
|---------|-----------------------------------|
| .       | Any character except newline      |
| \d      | Any digit (0–9)                   |
| \D      | Any non-digit                     |
| \w      | Word character (a-z, A-Z, 0–9, _) |
| \W      | Non-word character                |
| \s      | Whitespace (space, tab, etc.)     |
| \S      | Non-whitespace                    |
| ^       | Start of string                   |
| $       | End of string                     |
| `a      | b`                                |
| *       | 0 or more times                   |
| +       | 1 or more times                   |
| ?       | 0 or 1 time                       |
| {n}     | Exactly n times                   |
| {n,}    | n or more times                   |
| {n,m}   | Between n and m times             |

### Common Functions in `re` Module
#### 1. `e.search()` – Find first match
```python
re.search(r"\d+", "abc123def")  # → Match "123"
```
#### 2. `re.findall()` – Find all matches
```python
re.findall(r"\d+", "abc123def456")  # → ['123', '456']
```
#### 3. `re.match()` – Match from beginning of string
```python
re.match(r"\d+", "123abc")  # → Match "123"
```
#### 4. `re.sub()` – Replace using regex
```python
re.sub(r"\d+", "#", "phone: 09123456789")  # → phone: #
```
#### 5. `re.split()` – Split string by pattern
```python
re.split(r"\s+", "Hello   world   again")  # → ['Hello', 'world', 'again']
```


