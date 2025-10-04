def sort_age(lst):
    for i in range(len(lst)):
        min_index = i
        for j in range(i + 1, len(lst)):
            if lst[j]["age"] < lst[min_index]["age"]:
                min_index = j
        lst[i], lst[min_index] = lst[min_index], lst[i]
    return lst

def sort_name(lst):
    for i in range(len(lst)):
        min_index = i
        for j in range(i + 1, len(lst)):
            if lst[j]["name"] < lst[min_index]["name"]:
                min_index = j
        lst[i], lst[min_index] = lst[min_index], lst[i]
    return lst

students = [
{"name": "Alice", "age": 25},
{"name": "Bob", "age": 22},
{"name": "Charlie", "age": 23}
]

user_input = str(input("Key (age or name): "))
if user_input == "age":
    array = sort_age(students)
elif user_input == "name":
    array = sort_name(students)
else:
    print("Invalid choice.")
print(array)
