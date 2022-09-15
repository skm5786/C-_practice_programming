#include <iostream>
using namespace::std;
class Time{
    int hrs;
    int min;
public:
    void gettime(void);
    void showtime(void);
    void sumtime(Time , Time );
};
void Time::gettime(){
    cout<<"enter hours\n";
    cin>>hrs;
    cout<<"enter minutes\n";
    cin>>min;
}
void Time::showtime(){
    cout<<hrs<<" hours and "<<min<<" minutes\n";
}
void Time::sumtime(Time t1, Time t2){
    min=t1.min+t2.min;
    hrs=min/60;
    min=min%60;
    hrs=hrs+t1.hrs+t2.hrs;
}
int main(){
    Time t1,t2,t3;
    t1.gettime();
    t1.showtime();
    t2.gettime();
    t2.showtime();
    t3.sumtime(t1, t2);
    t3.showtime();
    return 0;
}
