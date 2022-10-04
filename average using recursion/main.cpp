#include <iostream>
using namespace::std;
float averageusingrecursion(int *,int,int);
float average(int *a, int size){
    return averageusingrecursion(a, size, 0);
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<average(a, n)<<endl;
    return 0;
}
float averageusingrecursion(int *a,int size,int i){
    if (i==size-1) {
        return a[i];
    } else if(i==0){
        return ((a[i]+averageusingrecursion(a, size, i+1))/(float)size);
    }
    else
        return (a[i]+averageusingrecursion(a, size, i+1));
}
