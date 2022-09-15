#include <iostream>
using namespace::std;
int main() {
    int a=0,b=1,n,c=0;
    cout<<"enter limit for sequence"<<endl;
    cin>>n;
    for (int i=0; i<n; i++) {
       
        c=a+b;
        cout<<a<<", ";
        a=b;
        b=c;
       
    }
    
    return 0;
}
