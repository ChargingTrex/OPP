#include <iostream>
using namespace std;
int main(){
    int i=2;
    double j=3.5;
    int *iptr= &i;
    double *dptr= &j;
    //iptr=dptr; //implicit casting dosent work with pointers //error 
    iptr=(int*)dptr; //doubler to int // explicit casting
    dptr= (double*)iptr; //int to double // explicit casting
    cout<<*iptr<<endl;
    cout<<*dptr<<endl;
    
    return 0;
}