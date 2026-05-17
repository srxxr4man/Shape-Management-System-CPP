/*
    =========================================================
                Shape Management System in C++
    =========================================================

    Description:
    A menu-driven application developed using
    Object-Oriented Programming concepts to calculate
    area and perimeter of different geometric shapes.

    Concepts Implemented:
    - Inheritance
    - Runtime Polymorphism
    - Abstract Classes
    - Pure Virtual Functions
    - Dynamic Memory Allocation
    - Function Overriding
    - Exception Handling

    Shapes Supported:
    - Rectangle
    - Circle
    - Triangle
    - Square

    =========================================================
*/

#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

// Abstract Base Class
// Defines common functions for all shapes
class Shape {
public:
    // Pure virtual functions
    // Must be implemented by derived classes
    virtual void display() = 0;
    virtual void area() = 0;
    virtual void perimeter() = 0;

    // Virtual destructor for proper cleanup
    virtual ~Shape() {}
};

// Rectangle Class
// Derived class from Shape
class Rectangle : public Shape {
private:
    double length, breadth;
public:
    // Constructor
    Rectangle(double l, double b) {
        // Exception handling for invalid inputs
        if (l<=0 || b<=0) {
            throw invalid_argument("Length and Breadth must be positive!");
        }
        length=l;
        breadth=b;
    }

    // Displays rectangle details
    void display() override {
        cout<<"\nRectangle Details"<<endl;
        cout<<"-------------------"<<endl;
        cout<<"Length:"<<length<<"m"<<endl;
        cout<<"Breadth:"<<breadth<<"m"<<endl;
    }

    // Calculates area of rectangle
    void area() override {
       cout<<"Area of Rectangle:"<<length*breadth<<"m²"<<endl;
    }

    // Calculates perimeter of rectangle
    void perimeter() override {
        cout<<"Perimeter of Rectangle:"<<2*(length+breadth)<<"m"<<endl;
    }
};

// Circle Class
// Derived class from Shape
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor
    Circle(double r) {
        // Exception handling for invalid radius
        if (r<=0) {
            throw invalid_argument("Radius must be positive!");
        }
        radius=r;
    }

    // Displays circle details
    void display() override {
        cout<<"\nCircle Details"<<endl;
        cout<<"----------------"<<endl;
        cout<<"Radius:"<<radius<<"m"<<endl;
    }

    // Calculates area of circle
    void area() override {
        cout<<"Area of Circle:"<<3.14159*radius*radius<<"m²"<<endl;
    }

    // Calculates circumference of circle
    void perimeter() override {
        cout<<"Circumference of Circle:"<<2*3.14159*radius<<"m"<<endl;
    }
};

// Triangle Class
// Derived class from Shape
class Triangle : public Shape {
private:
    double a,b,c;
public:
    // Constructor
    Triangle(double x,double y,double z) {

        // Exception handling for invalid sides
        if (x<=0 ||  y<=0 || z<=0) {
            throw invalid_argument("Sides must be positive!");
        }
        a=x;
        b=y;
        c=z;
    }

    // Checks whether triangle is valid
    // using Triangle Inequality Theorem
    bool isValid() {
        if (a+b<=c || a+c<=b || b+c<=a) {
            throw invalid_argument("Invalid Triangle Sides!");
        }
        return true;
    }

    // Displays triangle details
    void display() override {
        cout<<"\nTriangle Details"<<endl;
        cout<<"------------------"<<endl;
        cout<<"Sides:"<<a<<"m, "<<b<<"m, "<<c<<"m"<<endl;
    }

    // Calculates area using Heron's Formula
    void area() override {
        if (isValid()) {
            double s = (a+b+c)/2; // Semi-perimeter
            double area=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"Area of Triangle:"<<area<<"m²"<<endl;
        }
    }

    // Calculates perimeter of triangle
    void perimeter() override {
        if (isValid()) {
            cout<<"Perimeter of Triangle:"<<a+b+c<<"m"<<endl;
        }
    }
};

// Square Class
// Derived class from Shape
class Square : public Shape {
private:
    double side;
public:
    // Constructor
    Square(double s) {
        // Exception handling for invalid side
        if (s<=0) {
            throw invalid_argument("Side must be positive!");
        }
        side=s;
    }
    // Displays square details
    void display() override {

       cout<<"\nSquare Details"<<endl;
       cout<<"----------------"<<endl;
         cout<<"Side:"<<side<<"m"<<endl;
    }

    // Calculates area of square
    void area() override {
        cout<<"Area of Square: "<<side*side<<"m²"<<endl;
    }

    // Calculates perimeter of square
    void perimeter() override {
        cout<<"Perimeter of Square: "<<4*side<<"m"<<endl;
    }
};

// Main Driver Function
// Menu-driven interface
int main() {
    Shape* s;
    int choice;
    do{
        cout<<"\n======================================";
        cout<<"\n      Shape Management System";
        cout<<"\n=====================================\n";
        cout<<"1. Rectangle" << endl;
        cout<<"2. Circle" << endl;
        cout<<"3. Triangle" << endl;
        cout<<"4. Square" << endl;
        cout<<"5. Exit" << endl;
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch (choice) {

            //Runtime Polymorphism in action
            case 1:{
                try{
                    double l, b;
                    cout << "\nEnter Length and Breadth: ";
                    cin>>l>>b;
                    s=new Rectangle(l, b);
                    s->display(); // Displays rectangle details
                    s->area(); // Calculates area of rectangle
                    s->perimeter(); // Calculates perimeter of rectangle
                    delete s; // Clean up dynamically allocated memory
                }
                catch(exception &e) {
                    cout<<"\nError: "<<e.what()<<endl;
                }
                break;
            }

            case 2: {
                try {
                    double r;
                    cout << "\nEnter Radius: ";
                    cin >> r;
                    s = new Circle(r);
                    s->display(); // Displays circle details
                    s->area(); // Calculates area of circle
                    s->perimeter(); // Calculates circumference of circle
                    delete s; // Clean up dynamically allocated memory
                }
                catch (exception &e) {
                    cout<<"\nError: "<<e.what()<<endl;
                }
                break;
            }

            case 3:{
                try {
                    double x, y, z;
                    cout << "\nEnter Three Sides: ";
                    cin >> x >> y >> z;
                    s = new Triangle(x, y, z);
                    s->display(); // Displays triangle details
                    s->area(); // Calculates area of triangle
                    s->perimeter(); // Calculates perimeter of triangle
                    delete s; // Clean up dynamically allocated memory
                }
                catch (exception &e) {
                    cout<<"\nError: "<<e.what()<<endl;
                }
                break;
            }

            case 4:{
                try {
                    double side;
                    cout << "\nEnter Side: ";
                    cin >> side;
                    s = new Square(side);
                    s->display(); // Displays square details
                    s->area(); // Calculates area of square
                    s->perimeter(); // Calculates perimeter of square
                    delete s; // Clean up dynamically allocated memory
                }
                catch (exception &e) {
                    cout<<"\nError: "<<e.what()<<endl;
                }
                break;
            }

            case 5:{
                cout << "\nExiting Program..." << endl;
                break;
            }

            default: {
                cout << "\nInvalid Choice!" << endl;
            }
        }

    }while (choice != 5);

    return 0;
}
