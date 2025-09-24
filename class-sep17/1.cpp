#include <iostream>
using namespace std;
class vectors;
class matrices{
    private:
     int arr[2][2];
    public:
      matrices(int a,int b,int c,int d){
        this->arr[0][0]=a;
        this->arr[0][1]=b;
        this->arr[1][0]=c;
        this->arr[1][1]=d;
      }
    void get_matrices(){
        cout<<"the matrix is :  "<<arr[0][0]<<" "<<arr[0][1]<<" "<<arr[1][0]<<" "<<arr[1][1]<<endl;
      }
friend vectors vectors_matrices_sangam(vectors* v1, matrices* m1);
    };
class vectors{
    private:
    int arr2[2];

    public:
     vectors(int a, int b){
        this->arr2[0]=a;
        this->arr2[1]=b;
    }
    void get_vectors(void){
        cout<<"the vector is "<<arr2[0]<<" "<<arr2[1]<<" "<<endl;
    } ;
friend vectors vectors_matrices_sangam(vectors* v1, matrices* m1);
};
// non_member function i.e a  normal function 
vectors vectors_matrices_sangam(vectors* v1, matrices* m1){
    vectors v2(0,0);
   v2.arr2[0] = m1->arr[0][0] * v1->arr2[0] + m1->arr[0][1] * v1->arr2[1];
   v2.arr2[1] = m1->arr[1][0] * v1->arr2[0] + m1->arr[1][1] * v1->arr2[1];
  
return v2 ;
}
 
int main(){
    matrices m1(1,2,3,4);
    m1.get_matrices();
    vectors v1(1,2);
    v1.get_vectors();
    vectors v3(0,0);
    v3= vectors_matrices_sangam(&v1,&m1);
    v3.get_vectors();
    return 0;
}