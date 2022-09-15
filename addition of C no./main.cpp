#include <iostream>
using namespace::std;
class Complex{
    float real;
    float imaginary;
   static int count;
public:
    void getvalues(void){
        cout<<"enter real value of "<<count+1<<" complex no."<<endl;
        cin>>real;
        cout<<"enter imaginary value of "<<count+1<<" complex no."<<endl;
        cin>>imaginary;
        count++;
    }
    void showvalue(void){
        cout<<"complex no: "<<real<<"+("<<imaginary<<"i)"<<endl;
    }
    void addcno(Complex*,Complex*);
};
void Complex::addcno(Complex*c1,Complex*c2){
    real=c1->real+c2->real;
   imaginary=c1->imaginary+c2->imaginary;
}

int Complex::count;
int main(){
    Complex c1,c2,c3;
    c1.getvalues();
    c2.getvalues();
    c3.addcno(&c1, &c2);
    c3.showvalue();
    return 0;
}
