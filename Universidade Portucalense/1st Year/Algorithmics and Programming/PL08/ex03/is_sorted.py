def is_sorted(lst):
    for i in range(1, len(lst)):
        if lst[i - 1] > lst[i]:
            return False
    return True

lst = [1, 2, 6, 4, 5]
print(is_sorted(lst))
