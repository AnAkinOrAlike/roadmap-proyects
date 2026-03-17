from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

start = input('Enter URL: ')

count = input('Enter count: ')
count = int(count) - 1

where = input('Enter position: ')
where = int(where) - 1

listOfURL = list()

def knowsWho(url):
    listOfURL.append(url)
    html = urlopen(url, context=ctx).read()
    soup = BeautifulSoup(html, "html.parser")
    tags = soup('a')

    print(f"Retrieving: {tags[where].get('href')}")
    return tags[where]

print(f"Retrieving: {start}")
person = knowsWho(start)

while count > 0:
    person = knowsWho(person.get('href'))
    count = count - 1