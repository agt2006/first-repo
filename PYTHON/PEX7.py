# 1. Simple calculator
a = 10
b = 5

print("Add:", a + b)
print("Subtract:", a - b)
print("Multiply:", a * b)
print("Divide:", a / b)

# 2. Linear search
numbers = [1, 3, 5, 7, 9]
key = 5

found = False
for n in numbers:
    if n == key:
        found = True
        break

if found:
    print("Number found")
else:
    print("Number not found")
