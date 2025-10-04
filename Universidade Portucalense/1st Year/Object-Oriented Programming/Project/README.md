# Academic Materials Sharing System

## Project Description

This project was developed for the **Object-Oriented Programming** course of the 1st cycle in Computer Engineering, resit period 2024/2025.

### Objective
Develop a Java application to implement an academic materials sharing and reuse system among students, promoting reuse and circular economy in the academic environment.

### Main Features

- **Material Registration**: Allows students to register materials available for sharing/donation (used books, notes, calculators, etc.)
- **Search System**: Advanced search with filters by material type, course, and subject
- **Request Management**: Functionality to request materials and schedule pickup points
- **History and Statistics**: Track completed exchanges and reuse statistics

## How to Run the Project

### Prerequisites
- Java Development Kit (JDK) 8 or higher
- Eclipse IDE (recommended, as the project was developed in this IDE)

### Windows

1. **Install Java JDK**:
   - Download from [Oracle's official website](https://www.oracle.com/java/technologies/downloads/)
   - Run the installer and follow the instructions
   - Verify installation by opening Command Prompt and typing: `java -version`

2. **Install Eclipse IDE**:
   - Download from [Eclipse official website](https://www.eclipse.org/downloads/)
   - Extract and run the installer

3. **Running the Project**:
   - Open Eclipse IDE
   - Go to `File` → `Import` → `General` → `Existing Projects into Workspace`
   - Select the project folder
   - Right-click on the main class → `Run As` → `Java Application`

### macOS

1. **Install Java JDK**:
   ```bash
   # Using Homebrew (recommended)
   brew install openjdk
   
   # Or download from Oracle's website
   ```
   - Verify installation: `java -version`

2. **Install Eclipse IDE**:
   - Download the macOS version from [Eclipse website](https://www.eclipse.org/downloads/)
   - Drag Eclipse to Applications folder

3. **Running the Project**:
   - Open Eclipse IDE
   - Go to `File` → `Import` → `General` → `Existing Projects into Workspace`
   - Select the project folder
   - Right-click on the main class → `Run As` → `Java Application`

### Linux (Ubuntu/Debian)

1. **Install Java JDK**:
   ```bash
   # Update package list
   sudo apt update
   
   # Install OpenJDK
   sudo apt install openjdk-11-jdk
   
   # Verify installation
   java -version
   ```

2. **Install Eclipse IDE**:
   ```bash
   # Option 1: Using snap
   sudo snap install eclipse --classic
   
   # Option 2: Download from website
   # Download from https://www.eclipse.org/downloads/
   # Extract and run: ./eclipse
   ```

3. **Running the Project**:
   - Open Eclipse IDE
   - Go to `File` → `Import` → `General` → `Existing Projects into Workspace`
   - Select the project folder
   - Right-click on the main class → `Run As` → `Java Application`

### Alternative: Command Line Execution

If you prefer to run without Eclipse:

1. **Navigate to project directory**:
   ```bash
   cd /path/to/project
   ```

2. **Compile the Java files**:
   ```bash
   javac -d bin src/**/*.java
   ```

3. **Run the main class**:
   ```bash
   java -cp bin MainClassName
   ```

## Development Environment

- **IDE**: Eclipse IDE for Java Developers
- **Java Version**: Java SE 21
- **Architecture**: Object-Oriented Programming principles

## Notes

- This project was specifically developed using Eclipse IDE
- Make sure your Java environment is properly configured
- The project follows Object-Oriented Programming best practices
- All functionalities are implemented according to the academic requirements specified

## Troubleshooting

**Java not recognized**:
- Ensure Java is installed and added to PATH environment variable
- Restart your terminal/command prompt after installation

**Eclipse import issues**:
- Make sure you're importing the correct project folder
- Check that all Java files are in the `src` folder

**Compilation errors**:
- Verify that your JDK version is compatible
- Check that all dependencies are correctly configured in Eclipse