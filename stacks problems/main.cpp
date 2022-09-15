//keeping two stacks in a single linear array(the two stacks grow towards each other)
#include <iostream>
using namespace::std;
#define STACKSIZE 100
class stacks{
protected:
    int items[STACKSIZE];
};
class stack1:protected stacks{
    int top1=-1;
public:
    bool empty(stack1 *s){
        if (s->top1==-1) {
            return true;
        } else {
            return false;
        }
    }
    int pop(stack1 *s){
        if (empty(s)) {
            cout<<"stack is underflowed"<<endl;
            exit(1);
        }
            s->top1--;
            return (s->items[top1+1]);
        
    }
    bool overflow(stack1 *s){
        if (s->top1==(STACKSIZE/2)-1) {
            return true;
        } else {
            return false;
        }
    }
    void push(int a){
        if (overflow(this)) {
            cout<<"stack is overflowed"<<endl;
        } else {
            this->top1++;
            this->items[top1]=a;
        }
    }
};
class stack2: protected stacks{
    int top2=STACKSIZE;
public:
    bool empty(stack2 *s){
        if (s->top2==STACKSIZE) {
            return true;
        } else {
            return false;
        }
    }
    int pop(stack2 *s){
        if (empty(s)) {
            cout<<"stack is underflowed"<<endl;
            exit(1);
        }
            s->top2++;
            return (s->items[top2-1]);
        
    }
    bool overflow(stack2 *s){
        if (s->top2==(STACKSIZE/2)) {
            return true;
        } else {
            return false;
        }
    }
    void push(int a){
        if (overflow(this)) {
            cout<<"stack is overflowed"<<endl;
        } else {
            this->top2--;
            this->items[top2]=a;
        }
    }
};
int main(){
    stack1 a;
    stack2 b;
    a.push(2);
    a.push(3);
    b.push(4);
    b.push(5);
    a.push(6);
    cout<<b.pop(&b)<<endl;
    cout<<b.pop(&b)<<endl;
    cout<<a.pop(&a)<<endl;
    cout<<a.pop(&a)<<endl;
    cout<<a.pop(&a)<<endl;
    return 0;
}
