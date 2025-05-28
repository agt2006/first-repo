# 🟩 String Indexing
word = "OK"
print("Letter 1:", word[0])   # O
print("Letter 2:", word[1])   # K

# 🟩 String Slicing
name = "Cat"
print("First 2 letters:", name[:2])  # Ca

# 🟩 String Formatting
animal = "Dog"
print("I have a {}".format(animal))  # I have a Dog

# 🟩 Interchange First and Last Element in List
nums = [1, 2, 3]
print("Before swap:", nums)

# swap first and last
nums[0], nums[2] = nums[2], nums[0]
print("After swap:", nums)

# 🟩 Convert List to Tuple
tup = tuple(nums)
print("List to Tuple:", tup)

# 🟩 Convert Tuple to List
lst = list(tup)
print("Tuple to List:", lst)
