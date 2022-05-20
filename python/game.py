import random

number = int(input("Enter a number: "))

winner = random.randint(1, 10)

while number != winner:
    if number > winner:
        print("Too high")
    else:
        print("Too low")
    number = int(input("Enter a number: "))
    if number == winner:
        print("You win!")


