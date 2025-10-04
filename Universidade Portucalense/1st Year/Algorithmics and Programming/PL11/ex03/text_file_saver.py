with open("user_text.txt", "w") as file:
    while True:
        user_input = input("User Input: ")
        if user_input == "":
            break
        file.write(user_input + "\n")

with open("user_text.txt", "r") as file:
    print(file.read())