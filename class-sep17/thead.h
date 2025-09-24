#include <iostream>
using namespace std;
class bank_account{
    private:
     string name;
     int acc_no;
    public:
      bank_account(string name , int an);
      void get_details(void);
};