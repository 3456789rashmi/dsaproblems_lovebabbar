//reverse using recursion
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int i,int j){
//     if(i>j){
//         return;
//     }
//     // Swap arr[i] and arr[j]
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
    
//     reverse(arr,i+1,j-1);
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     reverse(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }
#include<iostream>
using namespace std;
string reverse(string &s,int i,int j){
    if(i>j){
        return s;
    }
    swap(s[i],s[j]);
    reverse(s,i+1,j-1);
}
int main(){
    string s;
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<s;
}