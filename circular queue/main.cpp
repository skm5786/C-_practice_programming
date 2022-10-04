#include <iostream>
using namespace::std;
#define MAXQUEUE 5
template<class T>
class CircularQueue{
    T items[MAXQUEUE];
    int front=0,rear=0;
public:
    bool empty(){
        if (rear==front) {
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
            if (front==MAXQUEUE-1) {
                front=0;
            } else
                front++;
            return items[front];
        }
    }
    bool full(){
        if (rear==front) {
            return true;
        } else {
            return false;
        }
    }
    void insert(T x){
            if (rear==MAXQUEUE-1) {
                rear=0;
            } else {
                rear++;
            }
        if (full()) {
            cout<<"queue is overflowed"<<endl;
            exit(1);
        }
        else
            items[rear]=x;
        }
};
int main(){
    CircularQueue<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.remove();
    a.remove();
    a.insert(4);
    a.insert(5);
    a.insert(6);
    cout<<a.remove()<<endl;
    cout<<a.remove()<<endl;
    cout<<a.remove()<<endl;
    cout<<a.remove()<<endl;
    cout<<a.remove()<<endl;
    cout<<a.remove()<<endl;
    return 0;
}
