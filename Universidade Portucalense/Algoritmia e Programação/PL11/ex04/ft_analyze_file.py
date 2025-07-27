def analyze_file(data):
    line_count = 0
    word_count = 0
    chars_count = 0
    with open("user_text.txt", "r") as file:
        for line in file:
            line_count += 1
            word_count += len(line.split())
            chars_count += len(line)
    result = f"File contains {line_count} lines, {word_count} words and {chars_count} characters."
    return  result


result = analyze_file("user_text.txt")
print(result)