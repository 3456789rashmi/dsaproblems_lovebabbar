// #include<iostream>
// using namespace std;
// class hero{
//     private:
//     int health;
//     public:
//     char level;
//     void print(){
//         cout<<level<<endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }
//     void setHealth(int h,char name){
        
//         health = h;
        
//     }
//     void setlevel(char ch){
//         level=ch;
//     }
// };
// int main(){
//     // hero ramesh;
//     // cout<<"Ramesh health: "<<ramesh.getHealth()<<endl;
//     // ramesh.setHealth(70);
//     // ramesh.level='A';
//     // cout<<"size: "<<ramesh.getHealth()<<endl;
//     // cout<<"size: "<<ramesh.level<<endl;

//     // return 0;
//     //static allocation
//     hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout<<"level is:"<<a.level<<endl;
//     cout<<"health is: "<<a.getHealth()<<endl;
//     //dynammically
//     hero *b = new hero;
//     b->setLevel('A');
//     b->setHealth(90);
//     cout<<"level is: "<<(*b).level<<endl;
//     cout<<"health is "<<(*b).getHealth()<<endl;
//     cout<<"level is"<<b->level<<endl;
//     cout<<"health is "<<b->getHealth()<<endl;
// }
//  #include<iostream>
//  #include<string>
//  using namespace std;
// class Teacher{
//     private:
//     double salary;
//     public:
//     //non-paprameterized
//     Teacher(){
//         dept = "computer science";
//     }
//     //parameterized
//     Teacher(string name,string dept,string subject, double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
//     string name;
//     string dept;
//     string subject;

//     void changeDept(string newdept){
//         dept=newdept;
//     }
//     // void setSalary(double s){
//     //     salary=s;
//     // }
//     // double getSalary(){
//     //     return salary;
//     // }
//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"subject: "<<subject<<endl;
//     }
// };
// int main(){
//     Teacher t1("Rashmi","Computer science","c++",50000);
//     // t1.name = "Shradha";
//     // t1.dept = "Maths";
//     // t1.dept= "Computer science";
//     // t1.setSalary(25000);
//     // cout<<t1.dept<<endl;
//     //  cout<<t1.getSalary()<<endl;
//     // return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher{
// private:
//  double salary;
//  public:
//  string name;
//  string subject;
//  string dept;
//  Teacher(){
//     dept = "computer science";
//  }
//  Teacher(string name,string dept,string subject, double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
//     //copy constructor
//     //pass nby reference
//     Teacher(Teacher &orgobj){
//         cout<<"i am custom copy constructor";
//         this->name = orgobj.name;
//         this->dept = orgobj.dept;
//         this->subject = orgobj.subject;
//         this->salary = orgobj.salary;
//     }
//     void changeDept(string newDept){
//         dept=newDept;
//     }
//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"subject: "<<subject<<endl;
//     }
// };
// int main(){
//     Teacher t1("Rashmi","Computer science","c++",50000);
//     t1.getInfo();
//     Teacher t2(t1);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     double *cgpaPtr;
//     Student(string name,double cgpa){
//         this->name=name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }
//     Student(Student &obj){
//         this->name = obj.name;
//         this->cgpaPtr = obj.cgpaPtr;
//     }
//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };
// int main(){
//     Student s1("Rashmi",9.5);
//     Student s2(s1);
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();
//     s2.name="neha";
//     s2.getInfo();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     double* cgpaPtr;
//     Student(string name,double cgpa){
//     this->name = name;
//     cgpaPtr = new double;
//     *cgpaPtr = cgpa;
//     }
    
//     ~Student(){
//         cout<<"hi i delete eveything";
//     }
//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };
// int main(){
//     Student s1("Rashmi",9.5);
//     s1.getInfo();
// }
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;
//     // Person(string name,int age){
//     // this->name=name;
//     // this->age=age;
//     // }
//     Person(){
//         cout<<"parent constructor\n";
//     }
//     //destructor
//     ~Person(){
//         cout<<"parent destructor\n";
//     }

// };
// class Student:public Person{
// public:
// int rollno;
// void getinfo(){
//     cout<<"name: "<<name<<endl;
//     cout<<"age: "<<age<<endl;
//     cout<<"rollno: "<<rollno<<endl;
// }
// //destructor
// ~Student(){
//     cout<<"child destructor\n";
// }
// };
// int main(){
//     Student s1;
//     s1.name="Rashmi";
//     s1.age=20;
//     s1.rollno = 23;
//     s1.getinfo();
//     return 0;
// }
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;

};
class Student:public Person{
    
};