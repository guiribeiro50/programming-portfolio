def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]

    lst = [0, 1]
    for i in range(2, n):
        element = lst[-1] + lst[-2]
        lst.append(element)
    return lst

# n = 5
# print(fibonnaci(n))