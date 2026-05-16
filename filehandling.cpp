// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     char arr[100];
//     cin.getline(arr,100);
//     ofstream myfile("xyz.txt");
//     myfile<<arr;
//     myfile.close();
// }
// #include <iostream>
// #include <string>
// using namespace std;

// class StudentInfo {
// protected:
//     string name;
//     int rollNo;
// public:
//     void setStudentInfo(const string& n, int r) {
//         name = n;
//         rollNo = r;
//     }
//     void displayStudentInfo() const {
//         cout << name << rollNo << endl;
//     }
// };

// class StudentMarks {
// protected:
//     int marks[3]; 
// public:
//     void setStudentMarks(int math, int science, int english) {
//         marks[0] = math;
//         marks[1] = science;
//         marks[2] = english;
//     }
//     void displayStudentMarks() const {
//         cout <<  marks[0] << marks[1] <<  marks[2] << endl;
//     }
// };

// class StudentExamResult : public StudentInfo, public StudentMarks {
// public:
//     void displayResult() const {
//         displayStudentInfo();
//         displayStudentMarks();
//         int total = marks[0] + marks[1] + marks[2];
//         cout << total << total / 3.0 << "%" << endl;
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     StudentExamResult students[n];

//     for (int i = 0; i < n; i++) {
//         string name;
//         int rollNo, math, science, english;

//         cout << "\nEnter details for student " << (i + 1) << ":\n";
//         cout << "Name: ";
//         cin.ignore(); 
//         getline(cin, name);
//         cout << "Roll No: ";
//         cin >> rollNo;
//         cout << "Marks (Math, Science, English): ";
//         cin >> math >> science >> english;

//         students[i].setStudentInfo(name, rollNo);
//         students[i].setStudentMarks(math, science, english);
//     }

//     for (int i = 0; i < n; i++) {
//         cout << "\nStudent " << (i + 1) << " result:\n";
//         students[i].displayResult();
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class studentinfo{
//     protected:
//     int roll;
//     string name;
//     public:
//     void set(const string &s,int m){
//         name=s;
//         roll=m;
//     }
//     void get() const{
//         cout<<name<<" "<<roll<<" ";
//     }
// };
// class studentmarks{
//     protected:
//     int marks[3];
//     public:
//     void set1(int math,int english,int sst){
//         marks[0]=math;
//         marks[1]=english;
//         marks[2]=sst;
//     }
//     void get1() const{
//         cout<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" ";
//     }
// };
// class studentresult :public studentinfo,public studentmarks{
//     public:
//     void get2()const{
//         get();
//         get1();
//         int total=marks[0]+marks[1]+marks[2];
//         cout<<"percentage: "<<total/3.0<<" %"<<endl;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     studentresult s[n];
//     for(int i=0;i<n;i++){
//         string name;
//         int math,science,sst;
//         int roll;
//         cout<<"student "<<i+1<<endl;
//         cout<<"name: ";
//         cin.ignore();
//         getline(cin,name);
//         cout<<"rollno: ";
//         cin>>roll;
//         cout<<"math science sst marks: ";
//         cin>>math>>science>>sst;
//         s[i].set(name,roll);
//         s[i].set1(math,science,sst);

//     }
//     for(int i=0;i<n;i++){
//         cout<<"result of student "<<i+1<<" ";
//         s[i].get2();
//     }
// }
// #include<iostream>
// using namespace std;
// class matrixelements{
//     public:
//     int rows,cols;
//     int matrix[3][3];
//     void set(int r,int c){
//         rows=r;
//         cols=c;
//         for(int i=0;i<r;i++){
//             for(int i=0;i<c;i++){
//                 cin>>matrix[i][j];
//             }
//         }
//     }
//     void get(int i,int j) const{
//         return matrix[i][j];
//     }
// };
// class matrixadd: public matrixelements{
//     public:
//     void add(matrixelements &other){
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 cout<<matrix[i][j]+other;
//             }
//         }
//     }
// }
#include <iostream>
using namespace std;

class Matrix {
protected:
    int rows, cols;
    int matrix[10][10];
public:
    void inputMatrix(int r, int c) {
        rows = r;
        cols = c;
        cout << "Enter matrix elements (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> matrix[i][j];
    }

    void displayMatrix() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }
};

class MatrixAddition : public Matrix {
private:
    int result[10][10]; 
public:
    void add(Matrix &matA, Matrix &matB) {
        rows = matA.rows;
        cols = matA.cols;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = matA.matrix[i][j] + matB.matrix[i][j];
            }
        }
        cout << "Matrix Addition Result:" << endl;
        displayResult();
    }

    void displayResult() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }
};

class MatrixSubtraction : public Matrix {
private:
    int result[10][10];  // to store result of subtraction
public:
    void subtract(Matrix &matA, Matrix &matB) {
        rows = matA.rows;
        cols = matA.cols;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = matA.matrix[i][j] - matB.matrix[i][j];
            }
        }
        cout << "Matrix Subtraction Result:" << endl;
        displayResult();
    }

    void displayResult() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    Matrix matA, matB;
    cout << "Enter elements for first matrix:" << endl;
    matA.inputMatrix(rows, cols);
    cout << "Enter elements for second matrix:" << endl;
    matB.inputMatrix(rows, cols);

    MatrixAddition add;
    add.add(matA, matB);  

    MatrixSubtraction sub;
    sub.subtract(matA, matB);  

    return 0;
}
