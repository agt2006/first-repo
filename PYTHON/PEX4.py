import random

# Pick a number between 1 and 10
secret = 7

# Ask the user to guess
guess = int(input("Guess a number between 1 and 10: "))

# Give hint
if guess == secret:
    print("Correct!")
elif guess < secret:
    print("Too low!")
else:
    print("Too high!")

print("The number was:", secret)
