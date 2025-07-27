def top_students(lst):
    highest_scores = []
    highest = students[0][1]
    for student in students:
        if student[1] > highest:
            highest = student[1]
    for student in students:
        if student[1] == highest:
            highest_scores.append(student[0])
    return highest_scores


students = [("Alice", 92), ("Bob", 85), ("Charlie", 92)]
print(top_students(students))
