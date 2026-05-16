// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.pop();
//     cout<<s.top()<<endl;
//     if(s.empty()){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<"Stack is not empty"<<endl;
//     }
//     // cout<<s.size();
// }
// #include<iostream>
// #include<stack>
// using namespace std;
// class stack{
//     public:
//     int size;
//     int *arr;
//     int top;
//     stack(int size){
//         this->size=size;
//         arr=new int(size);
//         top=-1;
//     }
//     void push(int element){
//         if(size-top>1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"stack overflow";
//         }
//     }
//     void pop(){
//         if(top>=0){
//             top--;

//         }
//         else{
//             cout<<"Stack underflow";
//         }
//     }
//     int peek(){
//         if(top>=0 ){
//         return arr[top];
//         }
//         else{
//             cout<<"Stack is empty";
//             return -1;
//         }
//     }
//     bool isempty(){
//         if(top==-1){
//             return true;
//     }
//     else{
//         return false;
//     }
//     }
// };
//     int main(){
//         stack s(5);
//         s.push(22);
//         s.push(2);
//         s.push(5);
//         cout<<s.peek();
//     }
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>s;
//     s.push(2);
//     s.push(3);
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.size()<<endl;
//     if(s.empty()){
//         cout<<"Stack is empty";
//     }
//     else{
//         cout<<"Stack is not empty";
//     }
// }
// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     //public:
//     int *arr;
//     int top;
//     int size;
//     public:
//     Stack(int size){
//         this->size=size;
//         arr=new int[size];
//         top=-1;
//     }
//     void push(int e){
//         if(size-top>1){
//             top++;
//             arr[top]=e;
//         }
//         else{
//             cout<<"stack overflow";
//         }
//     }
//     void pop(){
//         if(top>=0){
//             top--;
//         }
//         else{
//             cout<<"stack underflow"<<endl;

//         }
//     }
//     int peek(){
//         if(top>=0 && top<size)
//             return arr[top];
//     else{
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//     Stack st[5];
//     st.push(22);
//     st.push(34);
//     st.push(87);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek();
//     if(st.isEmpty()){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         "stack is not empty";
//     }
// }


//reversr a string using stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string str = "rashmi";
//     stack<char>s;
//     for(int i=0;i<str.length();i++){
//         char ch = str[i];
//         s.push(ch);
//     }
//     string ans="";
//     while(!s.empty()){
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout<<"ans is:"<<ans<<endl;
//}


//delete middle element from stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void del(stack<int>&s,int n,int curr){
//     if(s.empty() || curr==n){
//         return;
//     }
//     int x = s.top();
//     s.pop();
//     del(s,n,curr+1);
//     if(curr!=n/2){
//         s.push(x);
//     }
// }
// int main(){
    
//     stack<int>s;
//     s.push(2);
//     s.push(3);
//     s.push(8);
//     s.push(5);
//     s.push(7);
//     int curr=0;
//     del(s,s.size(),curr);
//     while(!s.empty()){
//         int p = s.top();
//         s.pop();
//         cout<<p<<" ";
//     }
// }
// #include<iostream>
// #include<stack>
// using namespace std;
// void reverse(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word="";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }cout<<endl;
// }
// int main(){
//     string s="Hey, how are you doing?";
//     reverse(s);
// }
// #include<iostream>
// using namespace std;
// class stack{
//     int *arr;
//     int top;
//     public:
//     stack(){
//         arr=new int[10];
//         top=-1;
//     }
//     void push(int x){
//         if(top>=0 && top<10){
//             arr[i]
//         }
//     }
// }
// #include <iostream>
// using namespace std;
// #define MAX 4
// int arr[MAX];
// int top=-1;
// void push(int data){
//     if(top==MAX-1){
//         cout<<"stack overflow"<<endl;
//         return;
//     }
//     top+=1;
//     arr[top] = data;
// }
// void pop(){
//     int v;
//     if(top==-1){
//         cout<<"stack underflow"<<endl;
//         exit(1);
//     }
//     v=arr[top];
//     top-=1;
// }
// void print(){
//     if(top==-1){
//         cout<<"underflow";
//         return;
//     }
//     for(int i=top;i>=0;i--){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     int data;
//     push(1);
//     push(2);
//     push(3);
//     push(5);
//     push(6);
//     data = pop();
//     cout<<data;
//    // print();
// }
// #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// #define MAX 4
// int arr[MAX];
// int top=-1;
// void isempty(){
//     if(top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void isfull(){
//     if(top==max-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(int data){
//     if(isfull()){
//         cout<<"stack overflow"<<endl;
//         return;
//     }
//     top+=1;
//     arr[top] = data;
// }
// void pop(){
//     int v;
//     if(isempty()){
//         cout<<"stack underflow"<<endl;
//         exit(1);
//     }
//     v=arr[top];
//     top-=1;
// }
// int peek(){
//     if(isempty()){
//         cout<<"underflow";
//     }
//     return arr[top];
// }
// void print(){
//     if(top==-1){
//         cout<<"underflow";
//         return;
//     }
//     for(int i=top;i>=0;i--){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     int choice,data;
//     while(1){
//         cout<<"endl";
//         cout<<"1. Push"<<endl;
//         cout<<"2 Pop"<<endl;
//         cout<<"3. Print the top element"<<endl;
//         cout<<"4. Print alla the elements of the stack"<<endl;
//         cout<<"5. Quit"<<endl;
//         cout<<"enter";
//         cin>>choice;
//     }
//     switch(choice){
//         case 1:
//         cout<<"enter element to be pushed: ";
//         cin>>data;
//         push(data);
//         break;
//         case 2:
//         data=pop();
//         cout<<"enter element to be poped: ";
//         break;
//         case 3:
//         cout<<"top element: ";
//        // cin>>peek();
//         break;
//         case 4:
//         print();
//         break;
//         default:
//         cout<<"wrong choice";
//             }
// }
// #include<bits/stdc++.h>
// using namespace std;


// int partition(int arr[],int lb,int up){
// int pivot = arr[lb];
// int start = lb;
// int end = up;

// while(start<end){

// while(arr[start]<=pivot){
// start++;
// }
// while(arr[end]>pivot){
// end--;
// }
// if(start<end){
// swap(arr[start],arr[end]);
// }
// }
// swap(pivot,arr[end]);
// return end;
// }
// void quicksort(int arr[],int lb,int up){
// if(lb<up){
// int p = partition(arr,lb,up);
// quicksort(arr,lb,p-1);
// quicksort(arr,p+1,up);
// }
// }

// int main(){

// int arr[] = {10, 7, 8, 9, 1, 5};
// int n = sizeof(arr) / sizeof(arr[0]);

// cout << "before sorting ";

// for (int i = 0; i < n; i++) {
// cout << arr[i] << " ";
// }
// cout << endl;
// quicksort(arr, 0, n - 1);

// cout <<"after sorting ";

// for (int i = 0; i < n; i++) {
// cout << arr[i] << " ";
// }
// return 0;
// }
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertatbottom(stack<int>&s,int element){
//     if(s.empty()){
//         s.push(element);
//         return;
//     }
//     int num=s.top();
//     s.pop();
//     solve(s,element);
//     s.push(num);
// }
// void reversedstack(stack<int>&stack){
//     if(stack.empty()){
//         return;
//     }
//     int num = stack.top();
//     stack.pop();
//     reversedstack(stack);
//     insertatbottom(stack,num);

// }
// int main(){
//     int stack[10]={23,21,5,77,4,56,33};
//     stack.reversedstack();
// }
///



// #include<iostream>
// using namespace std;
// class stack{
//     private:
//     int arr[100];
//     int top;
//     public:
//     stack(){
//         top=-1;
//     }
//     void push(int val){
//         if(top>=99){
//             cout<<"Stack overflow"<<endl;
//             return;
//     }
//     arr[++top]=val;
//     }
//     int pop(){
//         if(top==-1){
//             cout<<"stack underflow"<<endl;
//             return -1;
//         }
//         return arr[top--];
//     }
//     int peek(){
//         if(top==-1){
//             return -1;
//         }
//         return arr[top];
//     }
//     bool isempty(){
//         return (top==-1);
//     }
//     void sort(int val){
//         if(isempty() || val>peek()){
//             push(val);
//         }
//         else{
//             int temp=pop();
//             sort(val);
//             push(temp);
//         }
//     }
//     void display(){
//         if(isempty()){
//             cout<<"stack is empty"<<endl;
//             return;
//         }
//         for(int i=0;i<=top;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;

//     }

// };
// int main(){

// stack s;
// s.push(2);
// s.push(30);
// s.push(56);
// s.display();
// int element=25;
// s.sort(element);
// s.display();
// }
// #include<iostream>
// #include<stack>
// using namespace std;
// bool find(string &s){
//     stack<char>st;
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
//             s.push(ch);
//         }
//         else{
//             if(ch==')'){
//                 bool r=true;
//             while(st.top()!='('){
//                 if(st.top()=='+'||st.top()=='-' || st.top()=='*' || st.top()=='/'){
//                     r=false;}
//                     st.pop();
//                     if(r=true){
//                         st.pop();
//                     }
//             }
//             }
//         }
//     }
// }
// int main(){
//     int 
// }
// #include<iostream>
// using namespace std;
// #define max 7
// int arr[max];
// int top=-1;
// int isempty(){
//     if(top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isfull(){
//     if(top==max-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(int data){
//     if(top==max-1){
//         cout<<"stack overflow";
//     }
//     top+=1;
//     arr[top]=data;
// }
// int pop(){
//     int i,val;
//     val = arr[0];
//     for(int i=0;i<=top;i++){
//         arr[i]=arr[i+1];
//         top-=1;
//         return val;
//     }
// }
// int peek(){
//     if(top==-1){
//         cout<<"stack is empty";
//     }
//     else{
//         return arr[top];
//     }
// }
// void print(){
//     if(top==-1){
//         cout<<"stack underflow";
//     }
//     for(int i=0;i<=top;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n,data;
//     cin>>n;
//     while(1){
//     switch(n){
//         case 1:
//         cin>>data;
//         push(data);
//         break;
//         case 2:
//         data=pop();
//         cout<<data;
//         break;
//         case 3:
//         cout<<peek();
//         break;
//         case 4:
//         print();
//         break;
//         case 5:
//         exit(1);
//         break;
//         default:
//         cout<<"tatti";

//     }
//     }
// }
// #include<iostream>
// using namespace std;
// #define max 100
// int arr[max];
// int top=-1;
// int isempty(){
//     if(top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isfull(){
//     if(top==max-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(int data){
//     if(isfull()){
//         cout<<"stack overflow";
//     }
//     top+=1;
//     arr[top]=data;
// }
// int pop(){
//     int val;
//     if(top==-1){
//         cout<<"stack underflow";
//     }
//     val=arr[top];
//     top--;
//     return val;
// }
// int peek(){
//     if(top==-1){
//         cout<<"stack underflow";
//     }
//     return arr[top];
// }
// void findprimefactor(int num){
//     int i=2;
//     while(num>1){
//         while(num%i==0){
//             push(i);
//             num=num/i;
//         }
//         i++;
//     }
//     while(top!=-1){
//         cout<<pop()<<" ";
//     }
// }
// void print(){
//     if(top==-1){
//         cout<<"stack is empty";
//     }
//     while(!isempty()){
//         cout<<pop()<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     findprimefactor(n);
    
// }
// #include<iostream>
// using namespace std;
// #define max 100
// int arr[max];
// int top=-1;
// int isempty(){
//     if(top==-1){
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }
// int isfull(){
//     if(top==max-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(int data){
//     if(isfull()){
//         cout<<"overflow";
//         exit(1);
//     }
//     top++;
//     arr[top]=data;
// }
// int pop(){
//     int val;
//     if(isempty()){
//         cout<<"underflow";
//     }
//     val=arr[top];
//     top--;
//     return val;
// }
// int peek(){
//     if(isempty()){
//         cout<<"underflow";
//     }
//     return arr[top];
// }
// void dectobin(int data){
//     int i=2;
//     while(data>0){
//         push(data%i);
//         data/=i;
//     }
// }
// void print(){
//     while(!isempty()){
//         cout<<pop()<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     dectobin(n);
//     print();
// }
#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node* link;
}*top=NULL;
void push(int data){
    struct node* n;
    n=(struct node*)malloc(sizeof(n));
    if(n==NULL){
        cout<<"overflow";
        exit(1);
    }
    n->data=data;
    n->link=NULL;
    n->link=top;
    top=n;
}
void print(){
    struct node* temp;
    temp=top;
    cout<<"stack elements are: ";
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
int main(){
    int choice,data;
    while(1){
        cin>>choice;
    }
    switch(choice){
        case 1:
        cin>>data;
        push(data);
        break;
        case 2:
        print();
        break;
        case 3:
        exit(1);
        break;
        default:
        cout<<"wrong choice";
    }
}