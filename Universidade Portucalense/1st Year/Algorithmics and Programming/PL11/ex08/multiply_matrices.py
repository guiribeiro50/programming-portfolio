def multiply_matrices(matrix1, matrix2):
    column1 = len(matrix1[0])
    row2 = len(matrix2)
    if column1 == row2:
        result = []
        for i in range(len(matrix1)):
            row_result = []
            for j in range(len(matrix2[0])):
                sum = 0
                for k in range(len(matrix2)):
                    sum += matrix1[i][k] * matrix2[k][j]
                row_result.append(sum)
            result.append(row_result)
    else:
        result = f"Non compatible matrices"
    return result


matrix1 = [[1, 2], [3, 4]]
matrix2 = [[5, 6], [7, 8]]
result = multiply_matrices(matrix1, matrix2)
print(result)
