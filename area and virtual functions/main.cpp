//runtime polymorphism
#include <iostream>
#include <math.h>
using namespace::std;
class shape{
protected:
    double a;
    double b;
public:
    shape(double x,double y):a(x),b(y){}
    virtual void display_area()=0;
};
class triangle:public shape{
    double c;
public:
    triangle(double x,double y,double z):shape(x,y),c(z){};
    void display_area(void){
        cout<<"area of triangle is: "<<0.5*a*b*sin(c)<<endl;
    }
};
class rectangle:public shape{
public:
    rectangle(double x,double y):shape(x,y){};
    void display_area(void){
        cout<<"area of rectangle is: "<<a*b<<endl;
    }
};
class circle:public shape{
public:
    circle(double y):shape(0,y){};
    void display_area(void){
        cout<<"area of rectangle is: "<<3.14*b*b<<endl;
    }
};
int main(){
    shape *arra[3];
    triangle t1(2,3,1.57);
    rectangle r1(2,3);
    circle c1(5);
    arra[0]=&t1;
    arra[1]=&r1;
    arra[2]=&c1;
    arra[2]->display_area();
    return 0;
}
