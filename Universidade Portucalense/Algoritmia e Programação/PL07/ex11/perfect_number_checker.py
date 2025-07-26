def perfect(n):
    sum = 0
    for i in range(1, n - 1):
        if n % i == 0:
            sum += i
    if sum == n:
        return True
    else:
        return False


number = int(input("Number: "))
print(perfect(number))