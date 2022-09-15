#include <iostream>
using namespace::std;
template<class T>
class marray{
    T *x;
    int size;
public:
    marray(T *a,int m){
        
        size=m;
        x=new T[size];
        for (int i=0; i<size; i++) {
            x[i]=a[i];
        }
    }
    T min_elemet(void){
        T minel=x[0];
        for (int i=0; i<size; i++) {
            if (x[i]<minel) {
                minel=x[i];
            }
        }
        return minel;
    }
 
    
};
template<class T1>
T1 min_elemet1(T1 *x,int m){
    
    T1 minel=x[0];
    for (int i=0; i<m; i++) {
        if (x[i]<minel) {
            minel=x[i];
        }
    }
    return minel;
}
int main(){
   int x[5]={2,453,64,64,12};
   float aw[5]={12.4,34.2,44.34,1.34,3.47};
    char bw[5]={
        'x','r','~','t','o'
    };
    marray<int>s1(x,5);
    cout<<"min element of int array using template class is: "<<s1.min_elemet()<<endl;
    cout<<"min element of int array is: "<<min_elemet1(x,5)<<endl;
    cout<<"min element of float array is: "<<min_elemet1(aw,5)<<endl;
    cout<<"min element of char array is: "<<min_elemet1(bw,5)<<endl;
    return 0;
}
