def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)


number = int(input("Number: "))
result = factorial(number)
print(result)