# 🔷 Shape Management System using OOP in C++

## 📌 Description

This is a **console-based Shape Management System** developed using C++.
The project demonstrates core **Object-Oriented Programming (OOP)** concepts by calculating the area and perimeter of different geometric shapes through a menu-driven interface.

The system dynamically creates different shapes using runtime polymorphism and performs geometric calculations efficiently.

---

## 🧠 Concepts Used

* 💻 Object-Oriented Programming (OOP)
* 🧬 Inheritance (`Rectangle`, `Circle`, `Triangle`, `Square` inherit from `Shape`)
* 🔁 Runtime Polymorphism using virtual functions
* 🏛️ Abstract Classes and Pure Virtual Functions
* 🧹 Dynamic Memory Allocation (`new` and `delete`)
* ⚙️ Function Overriding
* ⚠️ Exception Handling (`try`, `throw`, `catch`)
* 📐 Mathematical Computations using `<cmath>`

---

## ⚙️ Features

* Add and manage different geometric shapes
* Calculate:
  * Area
  * Perimeter
* Supports:
  * Rectangle
  * Circle
  * Triangle
  * Square
* Triangle validation using Triangle Inequality Theorem
* Exception handling for invalid inputs
* Menu-driven user interface
* Dynamic object creation using base class pointers

---

## 🖥️ How It Works

* User selects a shape from the menu
* Required dimensions are entered
* Objects are dynamically created using runtime polymorphism
* Shape details are displayed
* Area and perimeter are calculated and displayed
* Invalid inputs are handled using exception handling
* Memory is released properly using virtual destructors

---

## 📐 Formulas Used

### Rectangle
* Area = Length × Breadth
* Perimeter = 2 × (Length + Breadth)

### Circle
* Area = π × r²
* Circumference = 2 × π × r

### Triangle
* Perimeter = a + b + c
* Area calculated using **Heron's Formula**

### Square
* Area = Side²
* Perimeter = 4 × Side

---

## ⚠️ Exception Handling

The project includes exception handling using:

* `try`
* `throw`
* `catch`

### Validations Implemented

* Negative or zero dimensions are rejected
* Invalid triangle formation is detected
* Invalid inputs generate meaningful error messages

### Exceptions Used

* `invalid_argument`
* `logic_error`

---

---

## 🛠️ Technologies Used

* Language: **C++**
* Libraries:
  * `<iostream>`
  * `<cmath>`
  * `<stdexcept>`
