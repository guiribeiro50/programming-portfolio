# Urban Pollution Monitoring System

## Project Overview

This project implements an Urban Pollution Monitoring System for the Portuguese Environment Agency (APA). The system processes pollution data from sensors that measure pollution concentrations in micrograms per cubic meter (μg/m³) and categorizes them into alert levels.

### Pollution Alert Levels
- **Moderate (M)**: below 19 μg/m³
- **High (H)**: 20–29 μg/m³
- **Extreme (E)**: 30–39 μg/m³
- **Severe (S)**: 40 or more μg/m³

## Input Data Format

The input file contains:
- Header with city name, date, and time of measurement
- Two integers indicating grid dimensions (rows and columns)
- Grid of pollution values

Example:
```
Lisboa; 2024/08/23; 13:30
3 5
25 12 65 -33 11
5 32 39 21 5
23 -2 34 11 12
```

## Tasks Implementation

### Task 1: Load Pollution Data
Read pollution data from an input file and store it in a matrix structure.

### Task 2: Display Pollution Data
Print the pollution matrix in a tabular format with right-aligned values.

### Task 3: Generate Pollution Alert Map (PAM)
Create a matrix representing alert levels (M, H, E, S) based on pollution values according to the defined thresholds.

### Task 4: Adjust Pollution Levels
Allow users to increase or decrease all pollution values by a specified amount, then generate an updated PAM.

### Task 5: Calculate Alert Level Percentages
Calculate and display the percentage of areas under each alert level (displayed with two decimal places).

### Task 6: Identify Severe Pollution Levels
Determine how many μg/m³ must be added to make the entire area reach the Severe level.

### Task 7: Effect of Pollution Control
Simulate pollution level changes and calculate the percentage of areas that change their alert level. Display the updated PAM.

### Task 8: Wind-Driven Pollution Spread
Simulate wind blowing from North to South: increase alert levels of areas whose Northern neighbor has a Severe level. Update and display the PAM.

### Task 9: Optimal Pollution Reduction Site
Identify the 3x3 area with the highest total pollution for deploying mobile air purifiers. If multiple areas qualify, choose the one farthest North and West. Display "no pollution to reduce" if no area requires reduction.

### Task 10: Find a Safe Column
Determine the most Eastern column where no area reaches Severe level, even after applying wind-driven pollution spread from North > South or South > North. Display "safe column = (x)" or "safe column = NONE".

### Task 11: User Interface
Create a console-based menu system allowing users to select and execute any of the above tasks.

## Expected Output Examples

**Task 2 - Display:**
```
18  40 -22  24  39
19  35  38  55  45
30  35  38  39  31
```

**Task 3 - PAM:**
```
M S M H E
M E E S S
E E E E E
```

**Task 5 - Percentages:**
```
Medium: 26.67%
High: 53.33%
Extreme: 13.33%
Severe: 6.67%
```

**Task 9 - Reduction Site:**
```
Deploy purifier at (1, 3).
```

**Task 10 - Safe Column:**
```
Safe column = (2)
```

## How to Run

To execute the program:

**Windows:**
```cmd
python interface.py
```

**macOS/Linux:**
```bash
python3 interface.py
```

The program will display a menu with all available tasks. Select the desired option by entering the corresponding number.
