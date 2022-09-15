//Write a program by creating an 'Employee' class having the following functions and print the final salary.
//1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
//2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
//3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours
#include <iostream>
#include <string.h>
using namespace::std;
struct empinfo{
    char name[15];
    int salary;
    int numberofhoursperweek;
};
class Employee{
public:
    empinfo e1;
    void getinfo( struct empinfo);
    void addSal(struct empinfo*);
    void AddWork(struct empinfo*);
};
void Employee::getinfo(struct empinfo e){
    cout<<"enter name\n";
    scanf("%s",e.name);
    cout<<"enter salary\n";
    cin>>e.salary;
    cout<<"enter number of hours perweek\n";
    cin>>e.numberofhoursperweek;
    strcpy(e1.name, e.name);
    e1.numberofhoursperweek=e.numberofhoursperweek;
    e1.salary=e.salary;
}
void Employee::addSal(struct empinfo *e){
    if (e->salary>500) {
        e->salary=e->salary+10;
    }
}
void Employee::AddWork(struct empinfo*e){
    if (e->numberofhoursperweek>6) {
        e->salary=e->salary+10;
    }
}
int main(){
    Employee high;
    struct empinfo a;
    high.getinfo(a);
    high.addSal(&a);
    high.AddWork(&a);
    printf("%s\n%d\n%d\n",a.name,a.salary,a.numberofhoursperweek);
    return 0;
}
