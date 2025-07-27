def find_commons(list1, list2):
    set_list1 = set(list1)
    set_list2 = set(list2)
    set_commons = set()
    for number in list1:
        if number in list2:
            set_commons.add(number)
    return set_commons

list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]
print(find_commons(list1, list2))