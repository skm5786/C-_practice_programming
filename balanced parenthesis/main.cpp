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
bool checkbalanceparenthesis(string expr){
    stacks<char>st;
    for(int i=0;i<expr.length();i++){
        if (st.empty()) {
            st.push(expr[i]);
        } else if ((st.stacktop() == '(' && expr[i] == ')')
                   || (st.stacktop() == '{' && expr[i] == '}')
                   || (st.stacktop() == '[' && expr[i] == ']')){
            st.pop();
        }
        else{
            st.push(expr[i]);
        }
    }
    if (st.empty()) {
        return true;
    } else {
        return false;
    }
}
int main(){
    string expr = "{()}[]";
    if (checkbalanceparenthesis(expr))
        cout << "parenthesis are Balanced\n";
    else
        cout << "parenthesis are Not Balanced\n";
    return 0;
}

