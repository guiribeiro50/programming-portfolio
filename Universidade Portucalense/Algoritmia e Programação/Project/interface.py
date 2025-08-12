import functions

choice = None
matrix = None
alert_map = None
choice8_executed = False

while True:
    print("\n")
    print("===== MENU =====")
    print("1. Load Pollution Data")
    print("2. Display Pollution Data")
    print("3. Generate Pollution Alert Map (PAM)")
    print("4. Adjust Pollution Levels")
    print("5. Calculate Alert Level Percentages")
    print("6. Identify Severe Pollution Levels")
    print("7. Effect of Pollution Control")
    print("8. Wind-Driven Pollution Spread")
    print("9. Optimal Pollution Reduction Site")
    print("10. Find a Safe Row")
    print("0. Exit program")

    try:
        choice = int(input("Enter your choice: "))
    except ValueError:
        print("Invalid choice. Try again.")

    if choice == 0:
        break

    elif choice == 1:
        data = str(input("Introduce the file you want to read: "))
        matrix = functions.load_data(data)
        if matrix:
            print("The matrix is stored in memory")

    elif choice == 2:
        if matrix is None:
            print("Please import the data (option 1).")
        else:
            print(functions.display_data(matrix))

    elif choice == 3:
        if matrix is None:
            print("Please import the data (option 1).")
        else:
            alert_map = functions.PAM(matrix)
            print("\n")
            print("Pollution Alert Map:")
            for i in range(len(alert_map)):
                print(*alert_map[i])

    elif choice == 4:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            value = None
            while True:
                try:
                    value = int(input("Insert the value (negative do decrease): "))
                    break
                except ValueError:
                    print("Invalid value. Please try again.")
            matrix = functions.adjust_levels(value, matrix)
            print(functions.display_data(matrix))
            alert_map = functions.PAM(matrix)
            print("\n")
            print("Updated Pollution Alert Map:")
            for i in range(len(alert_map)):
                print(*alert_map[i])

    elif choice == 5:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            if alert_map is None:
                print("Please, create the Pollution Alert Map (option 3).")
            else:
                functions.calc_percentages(alert_map)

    elif choice == 6:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            print(f"To raise the entire area to SEVERE, pollution must increase by {functions.identify_severe_levels(matrix)} μg/m³")

    elif choice == 7:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            if alert_map is None:
                print("Please, create the Pollution Alert Map (option 3).")
            else:
                value = None
                while True:
                    try:
                        value = int(input("Insert the value (negative do decrease): "))
                        break
                    except ValueError:
                        print("Invalid value. Please try again.")
                matrix = functions.adjust_levels(value, matrix)
                print(functions.display_data(matrix))
                new_alert_map = functions.PAM(matrix)
                print("\n")
                print("Updated Pollution Alert Map:")
                for i in range(len(new_alert_map)):
                    print(*new_alert_map[i])
                functions.pollution_control(value, alert_map, new_alert_map)
                alert_map = new_alert_map

    elif choice == 8:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            if alert_map is None:
                print("Please, create the Pollution Alert Map (option 3).")
            else:
                alert_map = functions.wind_spread(alert_map)
                print("\n")
                print("Updated Pollution Alert Map:")
                for i in range(len(alert_map)):
                    print(*alert_map[i])
                choice8_executed = True

    elif choice == 9:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            functions.reduction_site(matrix)

    elif choice == 10:
        if matrix is None:
            print("Please, import the data (option 1).")
        else:
            if alert_map is None:
                print("Please, create the Pollution Alert Map (option 3).")
            else:
                if choice8_executed == True:
                    alert_map = functions.wind_spread_south(alert_map)
                else:
                    alert_map = functions.wind_spread(alert_map)
                    alert_map = functions.wind_spread_south(alert_map)
                print(f"Safe column = ({functions.find_safe_column(alert_map) + 1})")
