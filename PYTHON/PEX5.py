# 1. Check palindrome and symmetrical
def check_string(s):
    if s == s[::-1]:
        print("Palindrome")
    else:
        print("Not Palindrome")
    
    half = len(s) // 2
    if s[:half] == s[-half:]:
        print("Symmetrical")
    else:
        print("Not Symmetrical")

# 2. Area of circle
def area_circle(r):
    print("Area of circle is:", 3.14 * r * r)

# 3. Odd or even
def check_odd_even(n):
    if n % 2 == 0:
        print("Even number")
    else:
        print("Odd number")

# Testing the functions
check_string("madam")
area_circle(5)
check_odd_even(4)
