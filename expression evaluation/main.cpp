#include <iostream>
#include <math.h>
#include <cstring>
using namespace::std;
#define STACKSIZE 100
bool checkdigit(char c){
    if (c>='0'&&c<='9') {
        return true;
    } else {
        return false;
    }
}
float oper(int,float,float);
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
float eval(char* expr){
    int c,position;
    float oper1,oper2,value;
    stacks<float>opndstk;
    for (position=0; expr[position]!='\0'; position++) {
        c=expr[position];
        if (checkdigit(c)) {
            opndstk.push((float)(c-'0'));
        } else {
            oper2=opndstk.pop();
            oper1=opndstk.pop();
           value= oper(c,oper1,oper2);
            opndstk.push(value);
        }
    }
    return opndstk.pop();
}
float oper(int symb,float op1,float op2){
    switch (symb) {
        case '+':
            return (op1+op2);
        case '-':
            return (op1-op2);
        case '*':
            return (op1*op2);
        case '/':
            return (op1/op2);
        case '^':
            return pow(op1,op2);
        default:
            cout<<"illegal operation entered"<<endl;
            exit(1);
    }
}
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string s)
{
 
    stacks<char> st;
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')') {
            while (st.stacktop() != '(') {
                result += st.stacktop();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty()
                   && prec(c) <= prec(st.stacktop())) {
                if (c == '^' && st.stacktop() != '^')
                    break;
                else {
                    result += st.stacktop();
                    st.pop();
                }
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.stacktop();
        st.pop();
    }
 
    return result;
}
int main(){
    string expr;

    cout<<"enter your expression: ";
    cin>>expr;
    expr=infixToPostfix(expr);

    int n = expr.length();
    char char_array[n + 1];
    strcpy(char_array, expr.c_str());

    cout<<"value of algebric expression: "<<eval(char_array)<<endl;
}
