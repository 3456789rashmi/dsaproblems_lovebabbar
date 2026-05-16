// #include<iostream>
// using namespace std;
// class Weight{
//     private:
//     int kg;
//     public:
//     Weight(){
//         kg=0;
//     }
//     Weight(int x){
//        kg=x;
//     }
//     void print(){
//         cout<<"weight in KG:"<<kg<<endl;
//     }
//     void operator ++(){
//         ++kg;
//     }
//     void operator ++(int){
//         kg++;
//     }
// };
// int main(){
//     Weight obj;
//     obj.print();
//     ++obj;
//     obj.print();
//     obj++;
//     obj.print();
// }
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int real,img;
//     public:
//     Complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     void print(){
//         cout<<real<<" + "<<img<<"i"<<endl;
//     }
//     Complex operator +(Complex c){
//         Complex temp;
//         temp.real = real+c.real;
//         temp.img = img+c.img;
//         return temp;
//     }

// };
// int main(){
//     Complex c1(5,4);
//     Complex c2(4,3);
//     Complex c3(1,1);
//     Complex c4;
//     c4 = c1+c2+c3;
//     c4.print();
// }
#include <iostream>
#include <string>
using namespace std;

// Base class Student
class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();  // To clear the input buffer
    }

    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Base class Examination
class Examination {
protected:
    int marks[5]; // Assume 5 subjects

public:
    void getExamDetails() {
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void displayExamDetails() {
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class Result using multiple inheritance
class Result : public Student, public Examination {
protected:
    float percentage;

public:
    void calculateResult() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        percentage = total / 5.0;
    }

    void displayResult() {
        displayStudentDetails();
        displayExamDetails();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class Placement inheriting from Result
class Placement : public Result {
    string companyName;

public:
    void getPlacementDetails() {
        if (percentage >= 60) {
            cout << "Enter the name of the company for placement: ";
            cout<<"tesla";
        } else {
            cout << "Student not eligible for placement (Percentage less than 60%)." << endl;
            companyName = "None";
        }
    }

    void displayPlacementDetails() {
        cout << "Placement Company: " << companyName << endl;
    }
};

int main() {
    Placement student1;

    // Get student, examination, result and placement details
    student1.getStudentDetails();
    student1.getExamDetails();
    student1.calculateResult();
    student1.getPlacementDetails();

    // Display student, examination, result and placement details
    cout << "\n--- Student Details ---\n";
    student1.displayResult();
    student1.displayPlacementDetails();

    return 0;
}
