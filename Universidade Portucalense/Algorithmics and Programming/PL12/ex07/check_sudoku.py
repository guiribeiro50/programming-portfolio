def check_row(row):
    elements = []
    for i in range(len(row)):
        if row[i] in elements:
            return False
        elements.append(row[i])
    return True

row = [5, 3, 4, 6, 7, 8, 9, 1, 2]
print(f"Valid row: {check_row(row)}")
row = [5, 3, 4, 6, 7, 8, 9, 1, 1]
print(f"Valid row: {check_row(row)}")
