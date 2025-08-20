#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int n;
    cout<< "Enter the number: ";
    cin >> n;
 for (int i=2; i <= sqrt(n); i++) {
        if (n % i == 0) {
        cout <<"Number isnt prime: " << n << endl;
    
        return 0;
           
    };
    
}
cout <<"Number is prime: " << n << endl;


       return 0;
    }






