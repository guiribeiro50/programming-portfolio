def find_two_largest(numbers):
    if len(numbers) < 2:
        return numbers
    if numbers[0] > numbers[1]:
        largest = numbers[0]
        second_largest = numbers[1]
    else:
        largest = numbers[1]
        second_largest = numbers[0]
    for i in range(2, len(numbers)):
        if numbers[i] > largest:
            second_largest = largest
            largest = numbers[i]
        elif numbers[i] > second_largest:
            second_largest = numbers[i]

    return [largest, second_largest]

numbers = [29, 10, 14, 37, 13]
print(find_two_largest(numbers))