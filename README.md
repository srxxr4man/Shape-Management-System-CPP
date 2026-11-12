# 🔷 Shape Management System using OOP in C++

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Concept-OOP-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Project-Console%20Based-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Memory-Dynamic%20Allocation-purple?style=for-the-badge" />
</p>

## 📌 Overview

The **Shape Management System** is a console-based application developed using C++. It demonstrates the fundamental concepts of Object-Oriented Programming (OOP) by calculating the area and perimeter of different geometric shapes through a menu-driven interface.

The project uses inheritance, abstraction, runtime polymorphism, and dynamic memory allocation to create and manage different shape objects through a common base class.

It also incorporates exception handling to validate user inputs and prevent invalid geometric calculations, making the application a practical demonstration of OOP concepts in C++.

---

## ✨ Features

- 🔷 Supports four geometric shapes: Rectangle, Circle, Triangle, and Square.
- 📐 Calculates the area and perimeter of each shape.
- 🧬 Uses inheritance to organize different shape classes.
- 🔁 Implements runtime polymorphism using virtual functions.
- 🏛️ Uses an abstract base class with pure virtual functions.
- ⚙️ Dynamically creates objects using base class pointers.
- ⚠️ Validates dimensions and handles invalid inputs.
- 🔺 Checks triangle validity using the Triangle Inequality Theorem.
- 🧹 Releases dynamically allocated memory using `delete`.
- 🖥️ Provides an interactive menu-driven interface.

---

## 🧠 Object-Oriented Programming Concepts Used

| Concept | Implementation |
|---|---|
| Encapsulation | Organizes shape-related operations inside classes |
| Inheritance | Rectangle, Circle, Triangle, and Square inherit from Shape |
| Abstraction | Shape acts as an abstract base class |
| Runtime Polymorphism | Virtual functions invoke the appropriate derived-class methods |
| Function Overriding | Derived classes implement their own area and perimeter calculations |
| Dynamic Memory Allocation | Objects are created using `new` and released using `delete` |
| Virtual Destructor | Ensures proper destruction of derived objects through base class pointers |

---

## ⚙️ Supported Shapes

### 1. Rectangle
- Accepts length and breadth.
- Calculates area and perimeter.

### 2. Circle
- Accepts radius.
- Calculates area and circumference.

### 3. Triangle
- Accepts three side lengths.
- Validates whether the sides form a valid triangle.
- Calculates area using Heron's Formula.

### 4. Square
- Accepts side length.
- Calculates area and perimeter.

---

## 📐 Mathematical Formulas Used

### Rectangle
- **Area** = Length × Breadth
- **Perimeter** = 2 × (Length + Breadth)

### Circle
- **Area** = π × Radius × Radius
- **Circumference** = 2 × π × Radius

### Triangle
- **Perimeter** = a + b + c

Using **Heron's Formula**:

- Semi-perimeter (s) = (a + b + c) / 2
- **Area** = √[s × (s - a) × (s - b) × (s - c)]

### Square
- **Area** = Side × Side
- **Perimeter** = 4 × Side

---

## 🔄 System Workflow

```text
          START
            |
            v
      Display Menu
            |
            v
      Select a Shape
            |
     +------+------+---------+
     |      |      |         |
 Rectangle Circle Triangle Square
     |      |      |         |
     +------+------+---------+
            |
            v
    Read Required Dimensions
            |
            v
      Validate Inputs
            |
       +----+----+
       |         |
     Valid    Invalid
       |         |
       v         v
 Create Shape   Throw Exception
 Object         and Display Error
       |
       v
 Runtime Polymorphism
       |
       v
 Calculate Area and Perimeter
       |
       v
    Display Results
       |
       v
  Release Allocated Memory
       |
       v
      END / Menu
```

---

## ⚠️ Exception Handling and Validation

The project uses C++ exception handling to manage invalid inputs and prevent incorrect calculations.

### Exception Handling Mechanisms

- `try` – Encloses statements that may generate exceptions.
- `throw` – Generates an exception when an invalid condition is detected.
- `catch` – Handles the exception and displays an appropriate error message.

### Validations Implemented

| Validation | Purpose |
|---|---|
| Positive dimensions | Rejects zero or negative measurements |
| Triangle Inequality Theorem | Ensures the three sides form a valid triangle |
| Input validation | Handles invalid user entries where implemented |
| Exception handling | Prevents invalid calculations and displays error messages |

### Exception Types Used

- `invalid_argument` – Used for invalid dimensions or arguments.
- `logic_error` – Used for logical errors in the program.

---

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Core programming language |
| `<iostream>` | Input and output operations |
| `<cmath>` | Mathematical calculations and square root |
| `<stdexcept>` | Standard exception handling |
| OOP | Class-based program design |

---

## 📂 Project Structure

```text
Shape-Management-System-CPP/
│
├── ShapeManagement.cpp
│
└── README.md
```

*Note: Update the source filename if your actual GitHub repository uses a different name.*

---

## 🚀 Getting Started

### Prerequisites

- C++ compiler (G++, MinGW, or equivalent).
- Visual Studio Code, Code::Blocks, or any C++ IDE.

### Compilation and Execution

**1. Clone the repository**

```bash
git clone https://github.com/srxxr4man/Shape-Management-System-CPP.git
```

**2. Navigate to the project directory**

```bash
cd Shape-Management-System-CPP
```

**3. Compile the program**

```bash
g++ Shape_Management_System.cpp -o ShapeManagement
```

**4. Run the executable**

```bash
./ShapeManagement
```

For Windows:

```bash
ShapeManagement.exe
```

---

## 🎯 Learning Outcomes

Through this project, the following concepts are demonstrated:

- Understanding the implementation of inheritance and abstraction.
- Applying runtime polymorphism using virtual functions.
- Working with abstract classes and pure virtual functions.
- Managing dynamically allocated objects through base class pointers.
- Understanding the importance of virtual destructors.
- Implementing exception handling for invalid inputs.
- Applying mathematical formulas to real-world programming problems.

---

## 🔮 Future Improvements

- Add more geometric shapes such as trapezium, ellipse, and parallelogram.
- Introduce a graphical user interface.
- Store previously calculated shape details.
- Add a history of calculations.
- Improve input validation and user interaction.

---

## 🎓 Academic Details

| Detail | Information |
|---|---|
| Institution | Muthoot Institute of Technology and Science (MITS) |
| Department | Artificial Intelligence and Data Science |
| Academic Batch | 2025–2029 |
| Semester | Semester 2 |
| Project Domain | Object-Oriented Programming |
| Programming Language | C++ |

---

## 👨‍💻 Author

**A Sreeram**

Artificial Intelligence and Data Science Engineering Student  
Muthoot Institute of Technology and Science (MITS)

Interested in C++, Object-Oriented Programming, Software Development, and Artificial Intelligence.

---

<p align="center">
  <b>🔷 Exploring Object-Oriented Programming Through Geometry!</b>
</p>
