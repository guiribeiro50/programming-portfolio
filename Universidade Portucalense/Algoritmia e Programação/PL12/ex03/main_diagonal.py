def main_diagonal(matrix):
    sum = 0
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            if i == j:
                sum += matrix[i][j]
    return sum

matrix = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]
print(main_diagonal(matrix))
