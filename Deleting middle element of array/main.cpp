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
void deletemiddle(stacks<int> *s,int size,int current){
    if (current==size/2) {
        s->pop();
        return;
    }
    else{
        int x=s->stacktop();
        s->pop();
        deletemiddle(s, size, current+1);
        s->push(x);}
}
int main()
{
    stacks<int> st;
 
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
 
    deletemiddle(&st, 7, 0);
    while (!st.empty())
    {
       int p=st.stacktop();
        st.pop();
        cout << p << " ";
    }
    return 0;
}


