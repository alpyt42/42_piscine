with open("numbers.dict.txt") as f:
    contents = f.readlines()

number = int(input("Number : "))
number_length = len(number)
counter = 0

while (number_length != 0):
    if (number_length > 3):
        print(contents[number])