/*Geometric Shapes with Polymorphism:
Problem Statement: Extend the shape hierarchy example by implementing polymorphism. 
Define a base class Shape with methods to calculate area and perimeter. 
Then, create derived classes like Circle, Rectangle, and 
Triangle, each with its own implementation of these methods.
*/

#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void calculateArea()=0;
    virtual void calculatePerimeter()=0;

};
class Circle:public Shape{
    private:
    float r;

    public:
    Circle()
    {
        this->r=0.0;
    }
    Circle(float r)
    {
        this->r=r;
    }
    void calculateArea()
    {
        cout<<"Circle Area: "<<(3.14*r*r)<<endl;
    }
    void calculatePerimeter()
    {
        cout<<"Circle Perimeter: "<<(2*3.14*r)<<endl;
    }

};

class Rectangle:public Shape{
    private:
    float length;
    float width;

    public:
    Rectangle()
    {
        this->length=0.0;
        this->width=0.0;
    }
    Rectangle(float length,float width)
    {
        this->length=length;
        this->width=width;
    }
    void calculateArea()
    {
        cout<<"Rectangle Area: "<<(length*width)<<endl;
    }
    void calculatePerimeter()
    {
        cout<<"Rectangle Perimeter: "<<((length+width)/2)<<endl;
    }

};

class Triangle:public Shape{
    private:
    float height;
    float base;
    float side1;
    float side2;
    float side3;

    public:
    Triangle()
    {
        this->height=0.0;
        this->base=0.0;
    }
    Triangle(float height,float base,float side1,float side2,float side3)
    {
        this->height=height;
        this->base=base;
        this->side1=side1;
        this->side2=side2;
        this->side3=side3;
    }
    void calculateArea()
    {
        cout<<"Triangle Area: "<<((base*height)/2)<<endl;
    }
    void calculatePerimeter()
    {
        cout<<"Triangle Perimeter: "<<(side1+side2+side3)<<endl;
    }

};

int main()
{
    Circle c(5.0);
   //Shape *s1;
    //s1=&c;

   // s1->calculateArea();
    //s1->calculatePerimeter();

    c.calculateArea();
    c.calculatePerimeter();

    Rectangle r1(15.0,10.0);
    r1.calculateArea();
    r1.calculatePerimeter();

    Triangle t1(15.0,10.0,2.0,3.0,4.0);
    t1.calculateArea();
    t1.calculatePerimeter();



    return 0;
}