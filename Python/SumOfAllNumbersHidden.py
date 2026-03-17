import re
name = input("Enter file:")
if len(name) < 1:
    name = "42.txt"
handle = open(name)
lstr = list()
lsti = list()
for linea in handle:
    linea = linea.rstrip()
    x = re.findall('[0-9]+', linea)
    for i in x:
        lstr.append(i)
for str in lstr:
    lsti.append(int(str))

suma = sum(lsti)
print(lstr, lsti, suma)