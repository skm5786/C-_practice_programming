#include <iostream>
using namespace::std;
#define STACKSIZE 100
class stacks{
    int top=-1;
    int items[STACKSIZE];
public:
    bool empty(stacks *s){
        if (s->top==-1) {
            return true;
        } else {
            return false;
        }
    }
    int pop(stacks *s){
        if (empty(s)) {
            cout<<"stack is empty"<<endl;
            exit(1);
        }
            s->top--;
            return (s->items[top+1]);
        
    }
    bool overflow(stacks *s){
        if (s->top==STACKSIZE-1) {
            return true;
        } else {
            return false;
        }
    }
    void push(int a){
        if (overflow(this)) {
            cout<<"stack is overflowed"<<endl;
        } else {
            this->top++;
            this->items[top]=a;
        }
    }
    int stacktop(stacks *s){
        int x;
        x=pop(s);
        push(x);
        return x;
    }
};
int main(){
    stacks s;
    int x;
    s.push(1);
    s.push(21);
    s.push(321);
    s.push(4321);
    cout<<s.stacktop(&s)<<endl;
    x=s.pop(&s);
    x=s.pop(&s);
    cout<<x<<endl;
    return 0;
}
