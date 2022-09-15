#include <iostream>
using namespace::std;

int main()
{
    int sum=0,k;
    long a;
    cout<<"enter your number: ";
    cin>>a;
    while (a!=0) {
       k=a%10;
        a=a/10;
        sum=sum+k;
    }
    cout<<"sum of number is: "<<sum<<endl;
    
    return 0;
}
