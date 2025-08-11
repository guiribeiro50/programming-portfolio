def check_subset(set1, set2):
    count = 0
    for element in set1:
        if element in set2:
                count += 1
    if count == len(set1):
        return True
    else:
        return False

set1 = {1, 2}
set2 = {1, 2, 3, 4}
result = check_subset(set1, set2)
print(f"Set1 is a subset of Set2: {result}")
