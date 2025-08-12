largest_odd = None
largest_position = 1
i = 1
while True:
    num = int(input("Número:"))
    if num == 0:
        break
    if (num % 2) != 0:
        if largest_odd is None or num > largest_odd:
            largest_odd = num
            largest_position = i
    i += 1
if largest_odd is not None:
    print(f"Largest odd number: {largest_odd}")
    print(f"Position: {largest_position}")
else:
    print("No odd numbers found")