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
        if ((c >= 'a' && c <= 'z'))
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
                   && prec(s[i]) <= prec(st.stacktop())) {
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
   string postexpr;
    cout<<"enter your expression"<<endl;
    cin>>expr;
    expr=infixToPostfix(expr);
    cout<<expr<<endl;
    return 0;
}
