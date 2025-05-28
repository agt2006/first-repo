# IndexError example
print("IndexError Example:")
try:
    x = [1, 2]
    print(x[3])  # Wrong index
except:
    print("Index error!")
finally:
    print("Done with IndexError\n")

# TypeError example
print("TypeError Example:")
try:
    y = "hi"
    z = y + 3  # Wrong type
except:
    print("Type error!")
finally:
    print("Done with TypeError")
