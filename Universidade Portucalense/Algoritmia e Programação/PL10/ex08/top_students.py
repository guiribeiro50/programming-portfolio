def top_students(students):
    highest_scores = []
    highest = students[0][1]
    for i in range(len(students)):
        if students[i][1] > highest:
            highest = students[i][1]
        elif students[i][1] == highest:
            highest_scores.append(students[i][0])
    return highest_scores


students = [("Alice", 92), ("Bob", 85), ("Charlie", 92)]
print(top_students(students))
