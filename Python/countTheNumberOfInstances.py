name = input("Enter file:")
if len(name) < 1:
    name = "mbox-short.txt"
handle = open(name)

counts = dict()
high = [0, None]


for line in handle:
    line = line.rstrip()
    words = line.split()
    if len(line) < 3 or 'From' not in words:
        continue
    for word in words:
        if ':' in word:
            counts[word[:2]] = counts.get(word[:2], 0) + 1

lst = []
for val, kei in list(counts.items()):
    lst.append((val, kei))
lst.sort()

for a, b in lst:
    print(a, b)