#include<iostream>
using namespace std;
// inheritance 
class university{ //base class
    private:
    int id;
    string name;
    public:
    university(int id,string name){
        this->name = name;
        this->id = id;
    }
    void get_details(){
        cout<<"university name is "<<name<<" id: "<<id<<endl;
    }
};
// name of the class : access_type name_of_base_clas
class student :public university{  //derived class
    //All the public data members and public methods become public data members and public methods of the derived class
    //if the access specifier is private then all the public data members and public methods become private data members and private methods of the derived class 
    // u would need to call them through a public function 
    private:
    //int id ;
    //string name;
    int course_code;
    string school;
    public:
    student(int id ,int course_dode,string name,string school) :university(id,name){ // constructor of derived class
       // this->id = id;
       // this->name = name;
       this->course_code = course_dode;
       this->school = school;  
    }
    void get_details2(){
        get_details(); // calling base class method
        //private metods can only be called using public methods of the class 
        cout<<" course code :"<<course_code<<" school :"<<school<<endl;
    }

};


int main(){
student s1(123,02,"santha","SCDS");
s1.get_details2();




    return 0;
}
