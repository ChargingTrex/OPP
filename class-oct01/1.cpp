#include <iostream>
using namespace std;
class university {
    int id;
    string name;
public:
    university(int id, string name) {   
        this->id = id;
        this->name = name;
    }
    void get_details() {
        cout << " name: " << name << " id: " << id << endl;
    }
};
class student : public university {
    int rollno;
    string school;
public:
    student(int rollno, int id, string na, string school) : university(id, na) {
        this->rollno = rollno;
        this->school = school;
    }
    void get_student() {
        cout << "student rollno is " << rollno << " school: " << school << " school :" << school << endl;
    }
};
class representative: public student {
    int task;
    string course;
    public:
    representative(int task, string course, int rollno, string school, int id, string name): student(rollno, id, name, school) {
        this->task = task;
        this->course = course;
    }
    void get_cr(){
        cout<<"task is "<<task<<" course: "<<course<<endl;
    }
};
class president: public representative {
    int position;
    string club;
    public:
    president(int position, string club, int task, string course, int rollno, string school, int id, string name): representative(task, course, rollno, school, id, name) {
        this->position = position;
        this->club = club;
    }
    void get_president(){
        if (position == 1){
            cout<<"position is president"<<" club: "<<club<<endl;
    }else if (position == 2){
        cout<<"position is vice president"<<" club: "<<club<<endl;
    }else if (position == 3){
        cout<<"position is secretary"<<" club: "<<club<<endl;
    }
    else{
        cout<<"member"<<" club: "<<club<<endl;
}
    }
    
};
int main() {
    representative c1(2,"C++",123,"SCDS",5,"arun");
    c1.get_details();
        c1.get_student();
    c1.get_cr();
    president p1(1,"music",0,"",124,"SCDS",6,"santha");
    p1.get_details();
    p1.get_student();
    p1.get_cr();
    p1.get_president();

    return 0;
}