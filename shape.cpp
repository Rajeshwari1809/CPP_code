/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes.
 Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. 
Each shape should have methods for calculating area and perimeter specific to its geometry.*/
#include<iostream>
using namespace std;
class shape{
   int vertices;
   int sides ;

 public:
   shape(){
    vertices = 0;
    sides = 0 ;

    cout<<"-------In shape default Constructor ;"<<endl;
   }
   
   shape(int vertices , int sides ){
     this->vertices= vertices;
     this->sides=sides;
     cout<<"----------In shape parametrized constructor"<<endl;
   }


   virtual void displayParameters(){
      cout<<"Vertices are :"<<vertices<<endl;
      cout<<"sides are :"<<sides<<endl;
   } };

   class Circle : public shape {
    float radius ;
   public:
    Circle(){
       radius = 5;
       cout<<"------Inside Circle default Constructor---------"<<endl;
    }

    Circle (int vertices , int sides,int radius): shape( vertices ,  sides ){
       this->radius=radius;
       cout<<"------Inside Circle parameterised Constructor---------"<<endl;
    }
    void displayParameters()
    {
      shape::displayParameters();
      cout<<"Radius: "<<radius<<endl;
    } 

    void CircleArea(){
        float area = 3.14 * radius * radius ;
        cout<<"Area of circle is :"<<area<<endl;
        float perimeter = 2 * 3.14 * radius;
        cout<<"Perimeter of Circle is :"<<perimeter<<endl;
    }
   };


    class Triangle : public shape {
    float height  ;
    float base ;
   public:
   Triangle (){
        height = 0 ;
     base =0;
       cout<<"------Inside Triangle default Constructor---------"<<endl;
    }

    Triangle (int vertices , int sides, float base , float height): shape( vertices ,  sides ){
       this->height= height;
       this->base = base ;
       cout<<"------Inside Triangle parameterised Constructor---------"<<endl;
    }
     void displayParameters()
    {
      shape::displayParameters();
      cout<<"Base: "<<base<<endl;
      cout<<"Height: "<<height<<endl;
    } 

    void TriangleArea(){
        float area1 = 0.5*base*height;
        cout<<"Area of Triangle is :"<<area1<<endl;
        float perimeter = base*3;
        cout<<"Perimeter of Triangle is :"<<perimeter<<endl;
    }


   };



class Rectangle : public shape {
    float breadth  ;
    float length ;
   public:
   Rectangle(){
        breadth =0 ;
       length =0;
       cout<<"------Inside Rectangle default Constructor---------"<<endl;
    }

    Rectangle (int vertices , int sides, float breadth , float length): shape( vertices ,  sides ){
       this->length= length;
       this->breadth = breadth ;
       cout<<"------Inside Rectangle Parameterised Constructor---------"<<endl;
    }
     void displayParameters()
    {
      shape::displayParameters();
      cout<<"Length: "<<length<<endl;
      cout<<"Breadth: "<<breadth<<endl;
    } 

    void RectangleArea(){
        float area1 = length*breadth;
        cout<<"Area of Rectangle is :"<<area1<<endl;
        float perimeter = 2*(length*breadth);
        cout<<"Perimeter of rectangle is :"<<perimeter<<endl;
    }


   };




int main(){
   
   Rectangle R1(4,4,20,25);
    R1.displayParameters();
   R1.RectangleArea();
   Circle C1(1, 1, 10);
   C1.displayParameters();
   C1.CircleArea(); 
    Triangle T1(3, 3, 10, 15);
    T1.displayParameters();
    T1.TriangleArea();
    


    return 0 ;
}