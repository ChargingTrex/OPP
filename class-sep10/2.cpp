#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size of an array "<<endl;
    cin>>n;
    int* arr = new int[n]; // dynamic memory allocation
    arr[0] = 1;
    arr[1]=2;
    arr[2]=3;
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    delete[] arr; // free the dynamically allocated memory
    return 0;
}