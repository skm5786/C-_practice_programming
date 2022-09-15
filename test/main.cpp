#include <iostream>
using namespace::std;
class Paper {
static int count;
int id;
public:
    Paper (){
    count++;
id= count;
cout << "Constructing object number " << id << endl;
if(id == 4)
throw 4;
    }
~Paper (){ cout << "Destructing object number " << id << endl; }
};
int Paper::count =0;
int main() {
Paper array[5];
    catch(int i) {
        cout << "Caught " << 1 << endl;}
}
