#include <iostream>
using namespace std;
class my_array
{
private:
    int n;
    int i = 0;
    int *arr;
    void details_of_array()
    {
        cout << "size of array is " << n << endl;
    }

public:
   /* my_array(int size)
    {
        this->n = size;
        int *arr = new int[n];
    }*/
   my_array(int size)
{
    this->n = size;
    arr = new int[n];   // ✅ use the member variable, not a new local one
}


    void append(int val)
    {
        arr[i] = val;
        i++;
    }
    void get_details()
    {
        details_of_array(); // calling private method using public mentod
        for (int j = 0; j < i; j++)
        {
            cout << arr[j] << " " << endl;
        }
    }
    int search(int x)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == x)
            {
                cout << "element found at index " << j << endl;
                return j;
            }
        }
        cout << "element not found" << endl;
        return -1;
    }
    void replace(int i,int val){
        for(int j=0;j<i;j++){
            if (j==i){
            arr[j]=val;
            break;
            }

        }
        /*
        OR
        if (i >= 0 && i < n) {   // check valid index
        arr[i] = val;
    } else {
        cout << "Invalid index" << endl;
    }*/

    }
    void resize(int n)
    {

    }
    void inset(){

    }
    ~my_array()
    {
        delete[] arr;
    }
};

int main()
{
    my_array a1(5);
    a1.append(1);
    a1.append(2);
    a1.append(3);
    a1.append(4);
    a1.get_details();
    a1.search(2);

    return 0;
}