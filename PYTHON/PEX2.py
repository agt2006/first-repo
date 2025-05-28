# 1. Distance between two points
x1 = 1
y1 = 1
x2 = 4
y2 = 5

d = ((x2 - x1)**2 + (y2 - y1)**2)**0.5
print("Distance =", d)

# 2. Prime numbers between 1 and 10
print("Prime numbers from 1 to 10:")
for n in range(1, 11):
    if n > 1:
        for i in range(2, n):
            if n % i == 0:
                break
        else:
            print(n)

# 3. Factorial of 4
f = 1
for i in range(1, 5):
    f = f * i
print("Factorial of 4 =", f)
