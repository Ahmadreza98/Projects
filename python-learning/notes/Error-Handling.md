# Error Handling
---
## Error Handling
Sometimes, your code might crash due to things like:
- Dividing by zero
- File not found
- Typing errors
- Invalid input, etc.
Python gives you tools to catch and handle these errors, so your program can respond gracefully instead of crashing.
### The `try`-`expect` Block.
```python
try:
    # Code that might raise an error
except SomeError:
    # What to do if that error happens
```
For Example:
```python
try:
    x = int(input("Enter a number: "))
    result = 10 / x
    print(result)
except ZeroDivisionError:
    print("You can't divide by zero!")
except ValueError:
    print("Please enter a valid number.")
```
### Optional Block

| Block   | What it does                                                |
|---------|-------------------------------------------------------------|
| try     | The risky code                                              |
| except  | Handles a specific error                                    |
| else    | Runs if no errors happened                                  |
| finally | Runs no matter what, good for cleanup (closing files, etc.) |

For Example:
```python
try:
    f = open("data.txt")
    print("File opened")
except FileNotFoundError:
    print("File not found.")
else:
    print("No errors occurred!")
finally:
    print("Done trying.")
```
Output if file doesn't exist:
```python
File not found.
Done trying.
```
Output if file exists:
```python
File opened
No errors occurred!
Done trying.
```
### Catching Multiple or All Errors
```python
try:
    # risky code
except (TypeError, ValueError):
    print("Type or value error occurred")
```
Catch any exception (not recommended unless you're 
logging/debugging): 
```python
except Exception as e:
    print(f"Something went wrong: {e}")
```
## Linter
A linter is a tool that analyzes your code to find
- Bugs or potential errors (like undefined variables)
- Style issues (naming, spacing, etc.)
- Bad practices or risky code
It doesn't run the code — it inspects it.
### Why Use a Linter?
| Benefit              | What It Helps With                              |
|----------------------|-------------------------------------------------|
| Catch mistakes early | Typos, undefined variables, unused imports      |
| Enforce style        | Makes code cleaner and more consistent          |
| Improve quality      | Flags things like unused variables or bad logic |
| Team consistency     | Everyone writes in a consistent format          |

### Popular Python Linters
| Linter Tool | What it Does                                              |
|-------------|-----------------------------------------------------------|
| pylint      | Very detailed and customizable linter                     |
| flake8      | Lightweight, fast, and widely used                        |
| black       | Code formatter – automatically formats code, not a linter |
| mypy        | Checks type annotations for errors                        |
| pycodestyle | Checks code style against PEP 8                           |

### How to Use a Linter
Install a linter (example: `pylint`)
```terminal
pip install pylint
```
Run it on your file:
```terminal
pylint your_script.py
```
Sample output:
```terminal
your_script.py:1:0: C0114: Missing module docstring (missing-module-docstring)
your_script.py:2:0: C0103: Variable name "x" doesn't conform to snake_case naming style (invalid-name)
```
- Use in PyCharm or VS Code.
- Most editors have linter integration, so they highlight issues live as 
  you type. 

## Unit-Test
A unit test checks a small part (a “unit”) of your code — usually a function or method — to make sure it behaves as expected. 

Think of it like asking:
> “If I give this function input X, will I get output Y?”

### Why Use Unit Tests?
| Benefit            | What It Does                                              |
|--------------------|-----------------------------------------------------------|
| Catch bugs early   | Confirms functions behave as expected                     |
| Improve confidence | Refactor safely without fear of breaking things           |
| Automate testing   | You can run tests automatically before deploying/shipping |
| Great for teams    | Everyone knows the code works and stays stable            |

### Unit Testing in Python — The Basics
Python comes with a built-in library called `unittest`.
- Step 1: Code to be tested
```python
def add(x, y):
    return x + y

def divide(x, y):
    return x / y
```
- Step 2: Write unit tests
```python
import unittest
from math_utils import add, divide

class TestMathUtils(unittest.TestCase):

    def test_add(self):
        self.assertEqual(add(2, 3), 5)
        self.assertEqual(add(-1, 1), 0)

    def test_divide(self):
        self.assertEqual(divide(10, 2), 5)
        with self.assertRaises(ZeroDivisionError):
            divide(5, 0)

if __name__ == '__main__':
    unittest.main()
```
### Run the tests
In terminal:
```terminal
python test_math_utils.py
```
If everything works, you’ll see something like:
```terminal
..
----------------------------------------------------------------------
Ran 2 tests in 0.001s
OK
```
#### Common unittest Methods
| Method               | What it does                 |
|----------------------|------------------------------|
| assertEqual(a, b)    | Checks a == b                |
| assertNotEqual(a, b) | Checks a != b                |
| assertTrue(x)        | Checks bool(x) is True       |
| assertFalse(x)       | Checks bool(x) is False      |
| assertIsNone(x)      | Checks x is None             |
| assertRaises(Error)  | Checks if an error is raised |

