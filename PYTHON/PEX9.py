print("Built-in Functions")

# 1. len()
name = "cat"
print(len(name))  # Output: 3

# 2. type()
x = 5
print(type(x))  # Output: <class 'int'>

# 3. max()
print(max(4, 7, 1))  # Output: 7

# 4. min()
print(min(4, 7, 1))  # Output: 1

# 5. sum()
print(sum([1, 2, 3]))  # Output: 6

#second
print("\nList Operations")

my_list = [10, 20, 30]

# 1. append
my_list.append(40)
print(my_list)  # [10, 20, 30, 40]

# 2. remove
my_list.remove(20)
print(my_list)  # [10, 30, 40]

# 3. pop
my_list.pop()
print(my_list)  # [10, 30]

# 4. insert
my_list.insert(1, 25)
print(my_list)  # [10, 25, 30]

# 5. sort
my_list.sort()
print(my_list)  # [10, 25, 30]
#third
print("\nTuple Operations")

my_tuple = (1, 2, 3, 2)

# 1. print all
print(my_tuple)

# 2. length
print(len(my_tuple))  # 4

# 3. count
print(my_tuple.count(2))  # 2

# 4. index
print(my_tuple.index(3))  # 2

# 5. slicing
print(my_tuple[1:3])  # (2, 3)
#fourth
print("\nDictionary Operations")

my_dict = {'a': 1, 'b': 2}

# 1. print dictionary
print(my_dict)

# 2. access value
print(my_dict['a'])  # 1

# 3. add new item
my_dict['c'] = 3
print(my_dict)

# 4. update value
my_dict['a'] = 10
print(my_dict)

# 5. print keys and values
print(my_dict.keys())
print(my_dict.values())
