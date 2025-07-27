def find_median(numbers):
    for i in range(1, len(numbers)):
        key = numbers[i]
        j = i - 1
        while j >= 0 and key < numbers[j]:
            numbers[j + 1] = numbers[j]
            j -= 1
        numbers[j + 1] = key
    if len(numbers) % 2 == 0:
        median = (numbers[(len(numbers) // 2) - 1] + numbers[len(numbers) // 2]) / 2
    else:
        median = numbers[(len(numbers) // 2)]
    return median

numbers = [3, 1, 4, 2, 5]
print(find_median(numbers))
