 #include <iostream>
using namespace std;
class base{
    public:
    int a=4;
};

class derived: public base{
    public:
    int b=5;
    int c=6;

};

int main(){
    base ob;
    base* obptr=&ob;
    cout<<"value of a in the base class"<<obptr->a<<endl;
    derived od;
    derived* odptr=&od;
    obptr=odptr; // UPCASTING // implicit casting is allowed here //  u will not lose data here
    //cout<<"value of a "<<obptr->a<<endl;
    //odptr=(derived*)obptr; // DOWNCASTING // explicit casting // u are going to lose data here

    cout<<"value of a,b,c is: "<<odptr->a<<odptr->b<<odptr->c<<endl;

    return 0;


}