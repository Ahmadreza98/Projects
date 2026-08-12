# Read Data
---
In Python, **reading data** can mean reading from various sources like:
- Text files (.txt)
- CSV/Excel files
- JSON or XML
- Databases
- User input
- APIs
Let’s walk through the **most common ways to read data in Python**:
### Reading from a Text File
```python
with open("example.txt", "r") as file:
    content = file.read()
    print(content)
```
- `read()` → reads the entire file
- `readline()` → reads one line at a time
- `readlines()` → returns all lines as a list
### Reading CSV Files
Use the `csv` module or `pandas`:
```python
import csv

with open("data.csv", newline="") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)
```
Using pandas (preferred for data analysis):
```python
import pandas as pd

df = pd.read_csv("data.csv")
print(df.head())  # show first 5 rows
```
### Reading JSON Data
```python
import json

with open("data.json") as f:
    data = json.load(f)
    print(data)
```
For JSON strings:
```python
data = json.loads('{"name": "Alice", "age": 30}')
```
### Reading Excel Files
```python
import pandas as pd

df = pd.read_excel("data.xlsx")
print(df)
```
> Requires `openpyxl`: `pip install openpyxl`

### Reading User Input from Terminal
```python
name = input("Enter your name: ")
print(f"Hello, {name}")
```
### Reading from a Web URL
```python
import requests

url = "https://example.com/data.txt"
response = requests.get(url)
print(response.text)
```
### Reading from a Database
```python
import sqlite3

conn = sqlite3.connect("mydata.db")
cursor = conn.cursor()

cursor.execute("SELECT * FROM users")
rows = cursor.fetchall()

for row in rows:
    print(row)
```