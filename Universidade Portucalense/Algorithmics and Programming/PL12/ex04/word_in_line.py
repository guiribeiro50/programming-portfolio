def count_word(data):
    count = 0
    with open(data, "r") as file:
        for line in file:
            if "Python" in line:
                count += 1
    return count

print(count_word("sample.txt"))
