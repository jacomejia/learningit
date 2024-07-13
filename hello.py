operation = input("Operation(addition/substraction): ")

if operation == "addition":
    x, y = input("addition: ").split("+")
    print(int(x) + int(y))

else:
    x, y = input("substraction: ").split("-")
    print(int(x) - int(y))