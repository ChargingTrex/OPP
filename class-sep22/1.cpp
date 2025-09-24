#include<iostream>
using namespace std;
class university{
    private:
    int id;
    string name;
    public:
    university(int id,string name){
        this->name = name;
        this->id = id;
    }
    void get_details1(){
        cout<<"university name is "<<name<<" id: "<<id<<endl;
    }
};
class student{
    private:
    int id ;
    int course_code;
    string name;
    string school;
    public:
    student(int id ,int course_dode,string name,string school){
        this->id = id;
        this->course_code = course_dode;
        this->name = name;
        this->school = school;  
    }
    void get_details2(){
        cout<<"student name is "<<name<<" id: "<<id<<" course code :"<<course_code<<" school :"<<school<<endl;
    }

};


int main(){
university u1(123,"santha");
u1.get_details1();   

student s1(123,02,"santha","SCDS");
s1.get_details2();




    return 0;
}
