import requests
from bs4 import BeautifulSoup
import ssl
import re

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

counts = dict()

url = "https://terraria.wiki.gg"

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
    'Accept-Language': 'en-US,en;q=0.5',
    'Connection': 'keep-alive',
}

try:
    session = requests.Session()
    response = session.get(url, headers=headers, timeout=10)
    response.raise_for_status()

    soup = BeautifulSoup(response.text, 'html.parser')

    tags = soup('a')
    for tag in tags:
        link = tag.get('href')
        if link is None: continue   
        words = link.split('/')
        if re.search('^/wiki/', link):
            if len(words) > 2:
                key = words[2]
                if 'Wiki' in key or 'Terraria' in key or 'Guide' in key or 'Console' in key or 'version' in key or 'Special' in key or '#' in key or 'Category' in key or 'Contents' in key: continue
                counts[key] = counts.get(key, 0) + 1
    for a, b in counts.items():
        if int(b) > 2:
            print(a, b)
                    
except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")
except Exception as e:
    print(f"Ocurrió un error: {e}")