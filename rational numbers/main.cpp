#include <iostream>
using namespace::std;
class Rational{
    int numerator;
    int denominator;
public:
    Rational(int a,int b)
    {
        numerator=a;
        denominator=b;
    }
    void showrational(void){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void reducerational(void){
        int x,y,rem;
        x=numerator;
        y=denominator;
        while (y!=0) {
            rem=x%y;
            x=y;
            y=rem;
        }
       numerator=numerator/x;
        denominator=denominator/x;
    }
    bool operator ==(Rational a){
        if (numerator*a.denominator==denominator*a.numerator)
            return true;
        else
            return false;
    }
};
int main(){
    Rational a(1, 2);
    Rational b(2049, 4056);
    a.showrational();
    b.showrational();
    b.reducerational();
    b.showrational();
    if (a==b) {
        cout<<"equal"<<endl;
    }
    else
        cout<<"not equal"<<endl;
    return 0;
}
