#include <iostream>
using namespace::std;
#define MAXSIZE 100
template<class T>
class Queue{
    T items[MAXSIZE];
    int front=-1;
    int rear=-1;
public:
    bool isnull(){
        if (front==rear==-1) {
            return true;
        } else {
            return false;
        }
    }
    bool isfull(){
        if (front==0&&rear==MAXSIZE-1) {
            return true;
        } else {
            return false;
        }
    }
    void Enqueue(T a){
        if (isfull()) {
            cout<<"queue is full"<<endl;
            exit(1);
        } else {
            rear++;
            items[rear]=a;
        }
    }
    T Dequeue(){
        if (isnull()) {
            cout<<"queue is empty"<<endl;
            exit(1);
        } else {
            front++;
            return items[front-1];
        }
    }
    void firstitem(T a){
        front++;
        rear++;
        items[front]=a;
    }
    T peek(){
        T x;
        x=items[front];
        return x;
    }
};
int main(){
    Queue<int> a;
    a.firstitem(5);
    a.Enqueue(6);
    a.Enqueue(7);
    cout<<a.Dequeue()<<endl;
    cout<<a.peek()<<endl;
    return 0;
}
