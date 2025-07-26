time = float(input("Time: "))
hours = int(time)
total = 0
minutes = time - hours

if hours <= 1:
    total += 2
elif hours == 0 and minutes <= 30:
    total += 1
elif hours == 0 and minutes > 30:
    total += 2

if 1 < hours < 2:
    total += 2 + 1.5
elif hours == 1 and minutes <= 30:
    total += 2 + 0.75
elif hours == 1 and minutes > 30:
    total += 2 + 1.5

if hours > 2:
    extra_hours = hours - 2
    total += 2 + 1.5
    while extra_hours > 0:
        total += 1
        extra_hours -= 1

if hours == 2 and minutes <= 30:
    total += 2 + 1.5 + 0.5
elif hours == 2 and minutes > 30:
    total += 2 + 1.5 + 1

print(f"Total fee: {total}€")
