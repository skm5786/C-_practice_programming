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

stacks <int> st;
void push_digits(int number)
{
    while (number != 0)
    {
        st.push(number % 10);
        number = number / 10;
    }
}
int reverse_number(int number)
{
    push_digits(number);
    
    int reverse = 0;
    int i = 1;
    while (!st.empty())
    {
        reverse = reverse + (st.stacktop() * i);
        st.pop();
        i = i * 10;
    }
    return reverse;
}
int main()
{
    int number = 123456;
    cout << reverse_number(number)<<endl;
    
    return 0;
}

