# Task 1
def load_data(data):
    matrix = []
    try:
        with open(data, "r") as file:
            lines = file.readlines()
            file_size = len(lines)
            for i in range(2, file_size):
                values = lines[i].split()
                row = []
                for j in range(len(values)):
                    row.append(int(values[j]))
                matrix.append(row)
    except FileNotFoundError:
        print(f"File '{data}' not found. Please try again.")
        return None
    return matrix

#Task 2
def display_data(matrix):
    table = "\nTabular Form Data:\n"
    for i in range(len(matrix)):
        table += " ".join(f"{element:>5}" for element in matrix[i]) + "\n"
    return table

#Task 3
def PAM(matrix):
    classified_matrix = []
    for i in range(len(matrix)):
        row_classified = []
        for j in range(len(matrix[i])):
            if matrix[i][j] <= 19:
                row_classified.append("M")
            elif 20 <= matrix[i][j] <= 29:
                row_classified.append("H")
            elif 30 <= matrix[i][j] <= 39:
                row_classified.append("E")
            else:
                row_classified.append("S")
        classified_matrix.append(row_classified)
    return classified_matrix

#Task 4
def adjust_levels(value, matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            matrix[i][j] += value
    return matrix

#Task 5
def calc_percentages(matrix):
    total = len(matrix) * len(matrix[0])
    medium = 0
    high = 0
    extreme = 0
    severe = 0

    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            if matrix[i][j] == "M":
                medium += 1
            elif matrix[i][j] == "H":
                high += 1
            elif matrix[i][j] == "E":
                extreme += 1
            elif matrix[i][j] == "S":
                severe += 1
    print(f"Medium:  {round(medium / total * 100, 2)}%")
    print(f"High:    {round(high / total * 100, 2)}%")
    print(f"Extreme: {round(extreme / total * 100, 2)}%")
    print(f"Severe:  {round(severe / total * 100, 2)}%")

#Task 6
def identify_severe_levels(matrix):
    soma = 0
    result = 0
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            if (matrix[i][j] < 40):
                result = 40 - matrix[i][j]
                soma += result
    return soma

#Task 7
def pollution_control(value, old_PAM, PAM):
    total = 0
    changed = 0
    for i in range(len(PAM)):
        for j in range(len(PAM[i])):
            total += 1
            if PAM[i][j] != old_PAM[i][j]:
                changed += 1
    changed_percentage = round((changed / total * 100), 2)
    if value < 0:
        print(
            f"\nWith a decrease of {value} µg/m³, the percentage of areas with alert changes is {changed_percentage}%")
    else:
        print(
            f"\nWith an increase of {value} µg/m³, the percentage of areas with alert changes is {changed_percentage}%")

#Task 8
def wind_spread(PAM):
    changed = set()
    for i in range(len(PAM) - 1):
        for j in range(len(PAM[i])):
            if PAM[i][j] == "S" and (i, j) not in changed:
                if PAM[i + 1][j] != "S":
                    PAM[i + 1][j] = "S"
                    changed.add((i + 1, j))
    return PAM

def wind_spread_south(PAM):
    changed = set()
    for i in range(len(PAM) - 1, 0, -1):
        for j in range(len(PAM[i])):
            if PAM[i][j] == "S" and (i, j) not in changed:
                if PAM[i - 1][j] != "S":
                    PAM[i - 1][j] = "S"
                    changed.add((i - 1, j))
    return PAM

#Task 9
def reduction_site(matrix):
    rows = len(matrix)
    columns = len(matrix[0])

    if rows < 3 and columns < 3:
        print("No pollution to reduce.")
        return

    largest_sum = -1000000
    position = None

    for i in range(rows - 2):
        for j in range(columns - 2):
            total = 0
            for r in range(i, i + 3):
                for c in range(j, j + 3):
                    total += matrix[r][c]
            if total > largest_sum:
                largest_sum = total
                position = (i, j)
            elif total == largest_sum:
                if i < position[0] or (i == position[0] and j < position[1]):
                    position = (i, j)
    if largest_sum <= 0:
        print("No pollution to reduce")
    else:
        print(f"Deploy purifier at ({position[0] + 1}, {position[1] + 1})")

#Task 11
def find_safe_column(PAM):
    for j in range(len(PAM[0]) - 1, -1, -1):
        is_safe = True
        for i in range(len(PAM)):
            if PAM[i][j] == "S":
                is_safe = False
                break
        if is_safe:
            return j
    return None
