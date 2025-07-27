def multiply_matrices(m1, m2):
    column1 = len(m1[0])
    row2 = len(m2)
    if column1 == row2:
        result = []
        for i in range(len(m1)):
            row = []
            for j in range(len(m2[0])):
                value = 0
                for k in range(len(m2)):
                    value += m1[i][k] * m2[k][j]
                row.append(value)
            result.append(row)
    else:
        result = f"Matrizes não compatíveis"
    return result


matrix1 = [[1, 2], [3, 4]]
matrix2 = [[5, 6], [7, 8]]
result = multiply_matrices(matrix1, matrix2)
print(result)
