# Generator
---
Let’s talk about Generators in Python — they're a powerful way to work with large data sets, streams, and lazy evaluation.
A generator is a special type of function that:
- Yields **items one at a time** using the `yield` keyword.
- **Pauses and resumes** where it left off.
- Is **memory efficient**, especially for large data.
### Difference: `return` vs `yield`

| return            | yield                               |
|-------------------|-------------------------------------|
| Ends the function | Pauses the function                 |
| Returns one value | Returns a value, but can be resumed |
| Can't resume      | Keeps state between calls           |

### Basic Example
```python
def count_up_to(n):
    i = 1
    while i <= n:
        yield i
        i += 1

counter = count_up_to(3)

for num in counter:
    print(num)
```
### Use Case: Large Data
```python
def read_lines(file_path):
    with open(file_path) as f:
        for line in f:
            yield line.strip()
```
> This way, you don’t load the whole file into memory — super efficient for 
> big files! 
### Behind the Scenes
Every time you call `next()` on a generator, it resumes from where it left off:
```python
gen = count_up_to(2)
print(next(gen))  # 1
print(next(gen))  # 2
# next(gen) again => StopIteration
```
### Generator Expressions (like list comprehensions!)
```python
squares = (x * x for x in range(5))
for s in squares:
    print(s)
```
> It's like: `[x*x for x in range(5)]`
> But doesn't create the full list in memory!
### When to Use Generators?
- Working with streams (files, APIs)
- Infinite sequences (like Fibonacci, counters)
- Lazy evaluation (don’t compute until needed)
- Saving memory on huge data sets
