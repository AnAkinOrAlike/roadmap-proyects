import urllib.request
import json

url = input('Enter location: ')

print('Retrieving', url)
uh = urllib.request.urlopen(url)
data = uh.read()
print('Retrieved',len(data),'characters')
listOf = json.loads(data)
namesOf = listOf['comments']
numsOf = []
for names in namesOf:
    numsOf.append(names['count'])
    
print('Count:', len(numsOf))
print('Sum:', sum(numsOf))