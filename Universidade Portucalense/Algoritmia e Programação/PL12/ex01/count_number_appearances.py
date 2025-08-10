def count_number_appearances(numbers):
    dictionary = {}
    for i in range(len(numbers)):
        if numbers[i] in dictionary:
            dictionary[numbers[i]] += 1
        else:
            dictionary[numbers[i]] = 1
    return dictionary

numbers = [1, 2, 2, 3, 3, 3, 4]
print(count_number_appearances(numbers))
