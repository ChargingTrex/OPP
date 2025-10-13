#include <iostream>
using namespace std;
class A{
public:
int a;
};

class B{
    public:
    int b;

};

//casting of unrelated class wont work
int main(){
A* oa;
B* ob;
//oa=ob; // poointers dont support  implicit casting //error
oa=(A*)ob; // explicit casting // but this will work
oa->a=4;
cout<<oa->a<<endl;
return 0;
}