def add_up(lst, target):
    indexes = []
    for i in range(len(lst)):
        for j in range(i + 1, len(lst)):
            if lst[i] + lst[j] == target:
                indexes.append(i)
                indexes.append(j)
    return indexes

nums = [2,7,11,15]
target = 9
print(add_up(nums, target))

nums = [3,2,4]
target = 6
print(add_up(nums, target))

nums = [3,3]
target = 6
print(add_up(nums, target))
