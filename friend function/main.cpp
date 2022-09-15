//adding height using friend function
#include <iostream>
using namespace::std;
class ABC;
class XYZ{
    int inputfeet;
    int inputinches;
public:
    void setvalues(void){
        cout<<"enter feet"<<endl;
        cin>>inputfeet;
        cout<<"enter inches"<<endl;
        cin>>inputinches;
    }
    void displayvalues(void){
        cout<<"feet: "<<inputfeet<<"\t"<<"inches: "<<inputinches<<endl;
    }
    friend XYZ addheight(XYZ,ABC);
};
class ABC{
    int givenfeet;
    int giveninches;
public:
    void setvalues(int a,int b){
        givenfeet=a;
        giveninches=b;
    }
    void displayvalues(void){
        cout<<"feet: "<<givenfeet<<"\t"<<"inches: "<<giveninches<<endl;
    }
    friend XYZ addheight(XYZ,ABC);
};
 XYZ addheight(XYZ h1,ABC h2){
    XYZ h3;
    h3.inputfeet=h1.inputfeet+h2.givenfeet;
    h3.inputinches=h1.inputinches+h2.giveninches;
    if (h3.inputinches>=12) {
        h3.inputfeet++;
        h3.inputinches=h3.inputinches-12;
    }
    return h3;
}


int main(){
    XYZ h1,h3;
    ABC h2;
    h1.setvalues();
    h1.displayvalues();
    h2.setvalues(5, 7);
    h2.displayvalues();
    h3=addheight(h1, h2);
    h3.displayvalues();
    return 0;
}
