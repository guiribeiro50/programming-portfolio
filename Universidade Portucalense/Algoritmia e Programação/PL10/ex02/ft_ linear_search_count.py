def linear_search_count(numbers, target):
    count = 0
    for index, value in enumerate(numbers):
        if value == target:
            count += 1
    return count

numbers = [3, 5, 2, 3, 8, 3, 10]
print(linear_search_count(numbers, 3))