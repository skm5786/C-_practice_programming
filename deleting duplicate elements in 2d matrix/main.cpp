#include <iostream>
using namespace::std;
int main(){
   int a[3][3]={1,3,4,6,4,1,5,6,7};
    int m,k;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            m=a[i][j];
            if(j==0){
                k=0;
            }
            else
                k=j+1;
            while (k<=3&&m!=0) {
                if (a[k][j]==m) {
                    a[k][j]=0;
                    k++;
                }
            }
    }
        }
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}
