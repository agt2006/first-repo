# Read from file
f = open("a.txt", "r")
data = f.read()
f.close()

# Write to new file
f = open("b.txt", "w")
f.write(data)
f.close()

# Count words
words = data.split()
print("Words:", len(words))
