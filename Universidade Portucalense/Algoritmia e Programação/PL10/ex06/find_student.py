def find_student(students, nome):
    for i in range(len(students)):
        name, score = students[i]
        if nome == name:
            return score
    return "Student not found"


students = [("Alice", 85), ("Bob", 90), ("Charlie", 78)]
print(find_student(students, "Bob"))
