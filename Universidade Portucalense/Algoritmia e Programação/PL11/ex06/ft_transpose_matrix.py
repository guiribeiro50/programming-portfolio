def transpose_matrix(matrix):
    result = []
    for j in range(len(matrix[0])):
        new_line = []
        for i in range(len(matrix)):
            new_line.append(matrix[i][j])
        result.append(new_line)
    return result


matrix = [[1, 2, 3], [4, 5, 6]]
transposed = transpose_matrix(matrix)
print(transposed)