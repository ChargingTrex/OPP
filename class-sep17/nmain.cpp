#include <iostream>
using namespace std;
#include "thead.h"

bank_account::bank_account(string name, int an){
   this->acc_no = an;
   this->name = name;
   cout<<"Account created successfully"<<name<<endl;
}
void bank_account :: get_details(void){
       cout<<"Mr/Ms : "<<name<<" "<<"Accxount number is "<<acc_no<<endl;
}