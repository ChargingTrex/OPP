#include <iostream>
using namespace std;
#include <cmath>
int main()
{
  int a,b,c,d;
  float root,root1,root2,real,immaginary ;
  cout << "Enter coficient of x^2: ";
  cin >> a;
  cout << "Enter coficient of x: ";
  cin >> b;
  cout << "Enter constant: ";
  cin >> c;
d=(b*b)-4*a*c;
  if (d > 0) {
  root1 = (-b + sqrt(d)) / (2 * a);
   root2 = (-b - sqrt(d)) / (2 * a);
  cout << "Roots are: " << root1 << " and " << root2 << endl;

  } else if (d == 0) {
   root = -b / (2 * a);
    cout << "One real root exists: " << root << endl;
  } else {
    real = (-b  / (2 * a));
    immaginary = sqrt(-d) / (2 * a);
    cout << "No real roots exist\n the imaginary roots are" << endl;
    cout << "Root 1: " << real << " +- " << immaginary << "i" << endl;

  } 


    
  
  return 0;
}