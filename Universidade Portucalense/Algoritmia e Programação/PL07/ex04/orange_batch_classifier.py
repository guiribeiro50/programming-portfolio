import math

while True:
    diameter = float(input("Diameter (0 to stop): "))
    if diameter == 0:
        break
    radius = diameter / 2
    volume = (4/3) * math.pi * (radius ** 3)
    if volume <= 120 or volume > 550:
        print("Not classified")
    elif volume <= 250:
        print("Class 1")
    else:
        print("Class 2")