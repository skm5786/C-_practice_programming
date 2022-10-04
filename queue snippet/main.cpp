#include <iostream>
using namespace::std;
#define MAXQUEUE 5
template<class T>
class Queue{
    T items[MAXQUEUE];
    int front=0,rear=-1;
public:
    bool empty(){
        if (rear<front) {
            return true;
        } else {
            return false;
        }
    }
    T remove(){
        if (empty()) {
            cout<<"queue is underflowed"<<endl;
            exit(1);
        } else {
            front++;
            return (items[front-1]);
        }
    }
    bool full(){
        if (rear==MAXQUEUE-1) {
            return true;
        } else {
            return false;
        }
    }
    void insert(T x){
        if (full()) {
            cout<<"queue is overflowed"<<endl;
            exit(1);
        } else {
            rear++;
            items[rear]=x;
        }
    }
};
int main(){
    Queue<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(5);
    cout<<a.remove()<<endl;
    cout<<a.remove()<<endl;
    return 0;
}

