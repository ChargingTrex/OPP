#include<iostream>
using namespace std;
class anything{
    private:
    void greet(){
        cout<<"hello from greet. private"<<endl;
    }
    public:
    void greet2(){
        greet();
        cout<<"hello from greet. public"<<endl;
    }
};
int main(){ 
    anything a1;
    /*a1.greet(); private method cannot be accessed outside the class 8 */
    a1.greet2();// private method can be classed/accessed using public method of the class

    return 0;
}