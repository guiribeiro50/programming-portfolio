def find_max(lst):
    greater = lst[0]
    for i in range(len(lst)):
        if lst[i] > greater:
            greater = lst[i]
    return greater


def find_min(lst):
    smallest = lst[0]
    for i in range(len(lst)):
        if lst[i] < smallest:
            smallest = lst[i]
    return smallest

lst = [1, 2, 3, 4, 5]
print(find_max(lst))
print(find_min(lst))
