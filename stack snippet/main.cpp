#include <iostream>
using namespace::std;
#define STACKSIZE 100
template<class T>
class stacks{
    int top=-1;
   T items[STACKSIZE];
public:
    bool empty(void){
        if (top==-1) {
            return true;
        } else {
            return false;
        }
    }
    T pop(void){
        if (empty()) {
            cout<<"stack is underflowed"<<endl;
            exit(1);
        }
            top--;
            return (items[top+1]);
        
    }
    bool overflow(void){
        if (top==STACKSIZE) {
            return true;
        } else {
            return false;
        }
    }
    void push(T a){
        if (overflow()) {
            cout<<"stack is overflowed"<<endl;
        } else {
            this->top++;
            this->items[top]=a;
        }
    }
    T stacktop(void){
        T x;
        x=pop();
        push(x);
        return x;
    }
};
int main(){
    stacks<char> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push('f');
    cout<<s.stacktop()<<endl;

    cout<<s.pop()<<endl;
    return 0;
}
