#include <iostream>
using namespace::std;
int main(){
    int *a;
    int k,j,l;
    cout<<"enter number of elements you want in array: ";
    cin>>k;
    a=new int(k);
    for ( int i=0; i<k; i++) {
        cout<<"enter "<<i+1<<" element of array: ";
        cin>>a[i];
    }
    j=a[0];
    l=a[0];
    for (int i=0; i<k; i++) {
        if (a[i]<j) {
            j=a[i];
        }
    }
    for (int i=0; i<k; i++) {
        if (a[i]>l) {
            l=a[i];
        }
    }
    cout<<"max is: "<<l<<" min is: "<<j<<endl;
    return 0;
}
