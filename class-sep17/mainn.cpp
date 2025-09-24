#include <iostream>
using namespace std;
#include "thead.h"
int main(){
    bank_account b1("abi",1234);
    bank_account b2("arun",5678);
    b1.get_details();
    b2.get_details();

    return 0;
}