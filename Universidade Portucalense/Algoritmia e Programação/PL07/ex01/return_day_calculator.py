start = int(input("Start Day (0 = Sunday, 6 = Saturday): "))
holiday = int(input("Duration (number of nights): "))
arrive = (start + holiday) % 7
print("Arrive day:", arrive)