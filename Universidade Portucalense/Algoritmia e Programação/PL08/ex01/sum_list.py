def sum_list(lst):
    sum = 0
    for i in range(len(lst)):
        sum += lst[i];
    return sum

lst = [1,2,3,4,5]
print(sum_list(lst))
