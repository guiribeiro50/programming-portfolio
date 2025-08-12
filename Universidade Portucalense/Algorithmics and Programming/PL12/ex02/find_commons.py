def find_commons(list1, list2):
    set_list1 = set(list1)
    set_list2 = set(list2)
    set_commons = set()
    for i in range(len(list1)):
        for j in range(len(list2)):
            if list1[i] == list2[j]:
                set_commons.add(list1[i])
    return set_commons

list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]
print(find_commons(list1, list2))
