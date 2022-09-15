//make an array of n by n+1 to store all the elements of two triangular matrix of size n by n
#include <iostream>
using namespace::std;
#define value 3
int main(){
    int  a[value][value]={1,2,3,0,4,5,0,0,6};
    int b[value][value]={14,15,16,0,7,8,0,0,9};
    int c[value][value+1];
    for (int i=0, j1=0; (i<value)&&j1<value; i++,j1++) {
        for (int j=0,j2=0; j<value&&j2<value/2; j++,j2++) {
            if (i<=j) {
                c[j2][j1]=a[i][j];
            }
        }
    }
  for (int i=0, j1=0; (i<value)&&j1<value; i++,j1++) {
    for (int j=0,j2=value/2; j<value&&j2<value; j++,j2++) {
        if (i<=j) {
            c[j2][j1]=b[i][j];
        }
    }
}
    for (int i=0; i<value; i++) {
        for (int j=0; j<value+1; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
