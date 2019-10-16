a = input("Enter something: ")
b = input("Okay try something better this time: ")

a, b = b, a
print("Now this might be a chicken-egg kinda debate as to what you entered first")
print(f"First item: {a}")
print(f"Second item: {b}")
