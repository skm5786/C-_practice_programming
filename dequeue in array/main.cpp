#include <iostream>
using namespace::std;
#define MAXQUEUE 5
template<class T>
class dequeue{
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
    T removeleft(){
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
    void insertright(T x){
        if (full()) {
            cout<<"queue is overflowed"<<endl;
            exit(1);
        } else {
            rear++;
            items[rear]=x;
        }
    }
    T removeright(){
        if (empty()) {
            cout<<"queue is underflowed"<<endl;
            exit(1);
        } else {
            rear--;
            return (items[rear+1]);
        }
    }
    void insertleft(T x){
        if (front<0) {
            cout<<"queue is underflowed"<<endl;
            exit(1);
        } else {
            front--;
            items[front]=x;
        }
    }
};
int main(){
    dequeue<int> a;
    a.insertright(1);
    a.insertright(2);
    a.insertright(3);
    a.insertright(4);
    a.insertright(5);
    cout<<a.removeleft()<<endl;
    cout<<a.removeleft()<<endl;
    cout<<a.removeleft()<<endl;
    a.insertleft(3);
    a.insertleft(2);
    cout<<endl;
    cout<<a.removeleft()<<endl;
    cout<<a.removeleft()<<endl;
    cout<<a.removeleft()<<endl;
    cout<<a.removeleft()<<endl;
    cout<<a.removeright()<<endl;
}
