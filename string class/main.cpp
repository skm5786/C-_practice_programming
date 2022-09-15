#include <iostream>
#include <string.h>
using namespace::std;
class mystring{
    char *p;
    int length;
public:
    mystring(){
        length=0;
        p=0;
    }
    mystring(const char*a){
        length=strlen(a);
        p=new char[length+1];
        strcpy(p, a);
    }
    mystring( mystring&);
    friend mystring operator+(mystring,mystring);
    int operator<=(mystring);
    friend void showstring(const mystring s);
    friend int operator==(mystring,mystring);
};
mystring::mystring( mystring &s){
    length=s.length;
    p=new char[length+1];
    strcpy(p,s.p);
    
}
mystring operator+(mystring x,mystring y){
    mystring z;
   z.length=x.length+y.length;
   z.p=new char[z.length+1];
    strcpy(z.p, x.p);
    strcat(z.p, y.p);
    return z;
}
int mystring::operator<=(mystring p){
    if (length<=p.length) {
        return 1;
    }
    else
        return 0;
}
void showstring(const mystring s){
     cout<<s.p;
 }
int operator==(mystring q,mystring w){
    int i,j=0;
    for ( i=0; i<q.length; i++) {
        if (q.p[i]==w.p[i]) {
            j++;
        }
    }
    if (j==(q.length)) {
        return 1;
    }
    else
        return 0;
        
    }
int main(){
    mystring m1("sumit ");
    mystring m2("thakral\n");
    mystring mm1=m1;
    mystring mm2=m2;
    mystring m3;
    m3=m1+m2;
    showstring(mm1);
    showstring(mm2);
    showstring(m3);
    if (m1<=m2) {
        showstring(m1);
        cout<<"is smaller than ";
        showstring(m2);
    }
    mystring mn("sumit ");
    if (mn==m1) {
        showstring(mn);
        cout<<"= ";
        showstring(m1);
        cout<<"\n";
    }
    
    return 0;
}
