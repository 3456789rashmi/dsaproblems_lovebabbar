// #include<iostream>
// using namespace std;

// int print(int n){
//     if(n==0){
//         return 1;
//     }
//     if(n==-1){
//         return 0;
//     }
//     int ans = print(n-1)+print(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<print(n);
// }


#include<iostream>
using namespace std;
void saydigits(int n,string arr[]){
    int digit = n%10;
    n=n/10;
    cout<<arr[n]<<" ";
    saydigits(n,arr);
}
int main(){
    string arr[10] = {"zero","one","two","three",
    "four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl<<endl<<endl;
    saydigits(n,arr);
    cout<<endl<<endl<<endl;
        
}