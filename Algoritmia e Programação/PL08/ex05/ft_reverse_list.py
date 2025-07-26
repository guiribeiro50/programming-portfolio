def reverse_list(lst):
    reversed_list = []
    for i in range(1, len(lst) + 1):
        reversed_list.append(lst[-i])
    return reversed_list

# lst = [1,2,3,4,5]
# print(reverse_list(lst))
