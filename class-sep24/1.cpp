#include<iostream>
using namespace std;
class my_array{
private:
int n;
int i=0;
int* arr = new int[n];
void details_of_array(){
    cout<<"size of array is "<<n<<endl; 
}        
public:
my_array(int size){
    this->n = size;
    int* arr = new int[n];

}
void append(int val){
    arr[i] = val;
    i++;
}
void get_details(){
    for(int j=0;j<i;j++){
        cout<<arr[j]<<" "<<endl;
    }
}
};

int main(){   
my_array a1(5);
a1.append(1);
a1.append(2);   
a1.append(3);
a1.append(4);
a1.get_details();


return 0;
}