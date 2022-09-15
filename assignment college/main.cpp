#include <iostream>
using namespace::std;
class Distance{
    int feet;
    float inches;
public:
    Distance(){//default constructor
        feet=0;
        inches=0;
    }
    Distance(int a, float b){  //parameterized constructor
        feet=a;
        inches=b;
    }
    void display(){
        cout<<"feet: "<<feet<<"\n"<<"inches: "<<inches<<endl;
    }
    Distance add(Distance a){
       
        feet=feet+a.feet;
        inches=inches+a.inches;
        return *this;
    }
};
int main(){
    Distance a(6,2);
    Distance b(5,9);
    a.display();
    b.display();
     Distance c=a.add(b);
    c.display();
    return 0;
}

