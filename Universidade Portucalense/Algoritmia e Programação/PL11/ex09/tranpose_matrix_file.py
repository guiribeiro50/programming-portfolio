def get_matrix(data):
    matrix = []
    with open("matrix.txt", "r") as file:
        rows = file.readlines()
        for row in rows:
            row = row.strip()
            values = row.split()
            int_values = []
            for value in values:
                int_values.append(int(value))
            matrix.append(int_values)
    return matrix


def calculate_transpose(matrix):
    transpose = []
    for j in range(len(matrix[0])):
        new_line = []
        for i in range(len(matrix)):
            new_line.append(matrix[i][j])
        transpose.append(new_line)
    return transpose


def transpose_file(tranpose):
    with open("transpose.txt", "w") as file:
        for row in transpose:
            for element in row:
                file.write(str(element) + " ")
            file.write("\n")


matrix = get_matrix("matrix.txt")
transpose = calculate_transpose(matrix)
transpose_file(transpose)
