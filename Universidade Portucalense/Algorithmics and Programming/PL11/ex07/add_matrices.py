def add_matrices(matrix1, matrix2):
    result = []
    for i in range(len(matrix1)):
        row = []
        for j in range(len(matrix1[0])):
            row.append(matrix1[i][j] + matrix2[i][j])
        result.append(row)
    return result


matrix1 = [[1, 2], [3, 4]]
matrix2 = [[5, 6], [7, 8]]
sum = add_matrices(matrix1, matrix2)
print(sum)