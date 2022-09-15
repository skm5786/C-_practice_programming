#include <iostream>
#include <math.h>
using namespace::std;
class polar{
    float radius;
    float angle;
public:
    polar(){
        radius=0;
        angle=0;
    }
    polar(float a,float b){
        radius=a;
        angle=b;
    }
    polar(polar &s){
        radius=s.radius;
        angle=s.angle;
    }
    polar operator+(polar a);
    void showdata(void){
        cout<<"radius :"<<radius<<endl;
        cout<<"angle :"<<angle<<endl;
    }
};
polar polar :: operator+(polar a){
    float z,w;
    polar p1;
    z=(radius*cos(angle))+a.radius*cos(a.angle);
    w=(radius*sin(angle))+a.radius*sin(a.angle);
    p1.radius=sqrt(z*z+w*w);
    p1.angle=atan(w/z);
    return p1;
}
int main(){
    polar p4;
    polar p2(3,0);
    p4=p2;
    polar p3=polar(4,1.57);
    polar p5=p2+p3;
    p2.showdata();
    p3.showdata();
    p4.showdata();
    p5.showdata();
    return 0;
}
