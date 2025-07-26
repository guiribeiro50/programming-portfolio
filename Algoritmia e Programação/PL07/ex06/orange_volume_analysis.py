import math
largest = None
smallest = None
count = 0
count_class1 = 0
count_class2 = 0
count_ungraded = 0
sum_class1 = 0
sum_class2 = 0

while True:
    diameter = float(input("Diameter (0 to stop): "))
    if diameter == 0:
        break
    radius = diameter / 2
    volume = (4/3) * math.pi * (radius ** 3)
    if volume <= 120 or volume > 550:
        count_ungraded += 1
        print("Not classified")
    elif volume <= 250:
        sum_class1 += volume
        count_class1 += 1
        print("Class 1")
    else:
        sum_class2 += volume
        count_class2 += 1
        print("Class 2")
    if largest is None or volume > largest:
        largest = volume
    if smallest is None or volume < smallest:
        smallest = volume
    count += 1

if count > 0:
    percentage = (count_ungraded / count) * 100
    if count_class1 > 0:
        avg_class1 = sum_class1 / count_class1
    else:
        avg_class1 = 0
    if count_class2 > 0:
        avg_class2 = sum_class2 / count_class2
    else:
        avg_class2 = 0
else:
    percentage = 0
    avg_class1 = 0
    avg_class2 = 0

print("Percentage of Ungraded Oranges: ", percentage)
print("Type 1 Average Volume: ", avg_class1)
print("Type 2 Average Volume: ", avg_class2)