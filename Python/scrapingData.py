from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter - ')
html = urlopen(url, context=ctx).read()
soup = BeautifulSoup(html, "html.parser")

stri = list()
intg = list()

tags = soup('span')
for tag in tags:
    stri.append(tag.contents)
for str in stri:
    intg.append(int(str[0]))

plus = sum(intg)
print("Count", len(stri))
print("Sum", plus)