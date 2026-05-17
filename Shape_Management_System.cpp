#include <iostream>
#include <cmath>
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
        length=l;
        breadth=b;
    }

    // Displays rectangle details
    void display() override {
        cout<<"Rectangle Details"<<endl;
        cout<<"-----------------"<<endl;
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
        radius=r;
    }

    // Displays circle details
    void display() override {
        cout<<"Circle Details"<<endl;
        cout<<"--------------"<<endl;
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
        a=x;
        b=y;
        c=z;
    }

    // Checks whether triangle is valid usinf Triangle Inequality Theorem    
    bool isValid() {
        return (a+b>c) && (a+c>b) && (b+c>a);
    }
    
    // Displays triangle details
    void display() override {
        cout<<"Triangle Details"<<endl;
        cout<<"----------------"<<endl;
        cout<<"Sides:"<<a<<"m "<<b<<"m "<<c<<"m"<<endl;
    }

    // Calculates area using Heron's Formula
    void area() override {
        if (!isValid()) {
            cout<<"Invalid Triangle!"<<endl;
            return;
        }
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of Triangle:"<<area<<"m²"<<endl;
    }

    // Calculates perimeter of triangle
    void perimeter() override {
        if (!isValid()) {
            cout<<"Invalid Triangle!"<<endl;
            return;
        }
        cout<<"Perimeter of Triangle:"<<a+b+c<<"m"<<endl;
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
        side=s;
    }

    // Displays square details
    void display() override {
        cout<<"Square Details"<<endl;
        cout<<"--------------"<<endl;
        cout<<"Side:"<<side<<"m"<<endl;
    }

    // Calculates area of square
    void area() override {
        cout<<"Area of Square:"<<side*side<<"m²"<<endl;
    }

    // Calculates perimeter of square
    void perimeter() override {
        cout<<"Perimeter of Square:"<<4*side<<"m"<<endl;
    }
};

// Main Driver Function
// Menu-driven interface
int main() {
    Shape* s;
    int choice;

    do {
        cout<<"\n=====================================";
        cout<<"\n      Shape Management System";
        cout<<"\n=====================================\n";
        cout<<"1. Rectangle"<<endl;
        cout<<"2. Circle"<<endl;
        cout<<"3. Triangle"<<endl;
        cout<<"4. Square"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch (choice) {
            
            // Runtime polymorphism using base class pointer
            case 1:{
                double l,b;
                cout<<"\nEnter Length and Breadth:";
                cin>>l>>b;
                s=new Rectangle(l,b);
                s->display(); // Display details of rectangle
                s->area(); // Calculate and display area of rectangle
                s->perimeter(); // Calculate and display perimeter of rectangle
                delete s; // Clean up memory
                break;

            }case 2:{
                double r;
                cout<<"\nEnter Radius:";
                cin>>r;
                s=new Circle(r);
                s->display(); // Display details of circle
                s->area(); // Calculate and display area of circle
                s->perimeter(); // Calculate and display circumference of circle
                delete s; // Clean up memory
                break;

            }case 3:{
                double x,y,z;
                cout<<"\nEnter Three Sides:";
                cin>>x>>y>>z;
                s=new Triangle(x,y,z);
                s->display(); // Display details of triangle
                s->area(); // Calculate and display area of triangle
                s->perimeter(); // Calculate and display perimeter of triangle
                delete s; // Clean up memory
                break;

            }case 4:{
                double side;
                cout<<"\nEnter Side:";
                cin>>side;
                s=new Square(side);
                s->display(); // Display details of square
                s->area(); // Calculate and display area of square
                s->perimeter(); // Calculate and display perimeter of square
                delete s; // Clean up memory
                break;

            }case 5:{
                cout<<"\nExiting Program..."<<endl;
                break;
            }
            default:{
                cout<<"\nInvalid Choice!"<<endl;
            }
        }

    }while(choice!=5); // Loop until user chooses to exit
    
    return 0;
}