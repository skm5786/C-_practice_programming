#include <iostream>
using namespace::std;
int main(){
   int a[6]={1,3,4,6,4,1};
    int m;
    for (int i=0; i<6; i++) {
        m=a[i];
        for (int j=i+1; j<6&&m!=0; j++) {
            if (a[j]==m) {
                a[j]=0;
            }
        }
    }
    for (int i=0; i<6; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
