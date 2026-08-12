# WEB Scarpy
---
Web scraping is the automated process of:
- Sending HTTP requests to a website
- Extracting data from the HTML of the page
- Structuring it (e.g., into lists, tables, CSV, etc.)
### Popular Python Tools for Web Scraping
| Tool            | Purpose                                    |
|-----------------|--------------------------------------------|
| `requests`      | Send HTTP requests                         |
| `BeautifulSoup` | Parse and search HTML/XML content          |
| `lxml`          | Fast HTML/XML parser                       |
| `Selenium`      | Automate browsers (JavaScript-heavy sites) |
| `Scrapy`        | Advanced scraping framework                |

### Simple Web Scraping Example (`Using requests` + `BeautifulSoup`)
```python
pip install requests beautifulsoup4

import requests
from bs4 import BeautifulSoup

url = "https://quotes.toscrape.com"
response = requests.get(url)

soup = BeautifulSoup(response.text, "html.parser")

quotes = soup.find_all("span", class_="text")

for quote in quotes:
    print(quote.text)
```
```terminal
### How It Works
1. `requests.get(url)` — downloads the webpage
2. `BeautifulSoup(html, "html.parser")` — parses the HTML
3. `find_all()` — extracts all elements matching a tag/class

### Example: Extract All Links from a Page
```
links = soup.find_all("a")

for link in links:
    href = link.get("href")
    print(href)
```
### Handling Headers and User-Agent
Some websites block bots. You can mimic a browser like this:
```
headers = {
    "User-Agent": "Mozilla/5.0"
}
response = requests.get(url, headers=headers)
```terminal
### Legal and Ethical Tips
- Always check the site's robots.txt: e.g. https://example.com/robots.txt
- Don't overload the server (use delays)
- Use scraping for educational/personal projects, or get permission

### When to Use `Selenium`?
When the site uses JavaScript to render data, `requests` and `BeautifulSoup` 
won't see the full content. You need `Selenium`:
```
pip install selenium
```
Then use it to control a browser (like Chrome) and extract data after it 
loads.
```
### Summary

| Library         | Use Case                       |
|-----------------|--------------------------------|
| `requests`      | Download the page (HTML)       |
| `BeautifulSoup` | Parse and extract HTML content |
| `Selenium`      | Handle JavaScript-heavy sites  |
| `Scrapy`        | Large-scale, robust scraping   |
