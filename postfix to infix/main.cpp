#include <iostream>
using namespace std;

bool isOperand(char x)
{
return (x >= 'a' && x <= 'z') ||
        (x >= 'A' && x <= 'Z');
}
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
string getInfix(string exp)
{
    stacks<string> s;

    for (int i=0; exp[i]!='\0'; i++)
    {
        // Push operands
        if (isOperand(exp[i]))
        {
        string op(1, exp[i]);
        s.push(op);
        }
        else
        {
            string op1 = s.stacktop();
            s.pop();
            string op2 = s.stacktop();
            s.pop();
            s.push("(" + op2 + exp[i] +
                op1 + ")");
        }
    }
    return s.stacktop();
}
int main()
{
    string exp = "ab*c+";
    cout << getInfix(exp);
    return 0;
}

