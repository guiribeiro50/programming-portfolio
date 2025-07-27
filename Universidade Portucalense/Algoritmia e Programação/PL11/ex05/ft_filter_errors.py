def filter_errors(input_file, output_file):
    with open(input_file, "r") as file:
        with open(output_file, "w") as file2:
            for line in file:
                if line.startswith("[ERROR]"):
                    file2.write(line)

filter_errors("logs.txt", "error_logs.txt")
with open("error_logs.txt", "r") as file:
    print(file.read())