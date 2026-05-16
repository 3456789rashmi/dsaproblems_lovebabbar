// #include<iostream>
// using namespace std;
// int main(){
// //     int a = 4;
// //     int b = 6;
// //     cout<<"a&b "<<(a&b)<<endl;//4
// //     cout<<"a|b "<<(a|b)<<endl;//6
// //     cout<<"~a "<<(~a)<<endl;//-5
// //     cout<<"a^b "<<(a^b)<<endl;//2
// cout<<(17>>1)<<endl;
// cout<<(17>>2)<<endl;
// cout<<(19<<1)<<endl;
// cout<<(21<<2)<<endl;

// }
//fibbonacci series
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n;i++){
//         int fibb  = a+b;
//         cout<<fibb<<" ";
//         a  = b;
//         b  = fibb;
        
//             }

// }
//prime number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool isprime =1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"not prime"<<endl;
//             isprime=0;
//             break;
//         }

//     }
//     if(isprime==0){
//         cout<<"not prime";
//     }
//     else{
//         cout<<"prime";
//     }
// }
//subtraction of pdt and sum
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int pdt = 1;
//     int sum = 0;
// while(n>0)
// {
//     int r = n%10;
//     pdt*=r;
//     sum+=r;
//     n/=10;
//     }
//     cout<<pdt-sum;
// }
// class Solution{
//     public:
//     int subtractProductAndSum(int n){
//         int prod = 1;
//         int sum = 0;
//         while(n!=0){
//             int digit = n%10;
//             prod = prod * digit;
//             sum  = sum+digit;
//             n/=10;
//         }
//         int ans = prod-sum;
//         return ans;
//     }
// }
// class Solution{
//     public:
//     int harmingWeight(int n){
//         int count=0;
//         while(n!=0){
//             if(n&1){
//                 count++;
//             }
//             n=n>>1;
//         }
//     }
// };
// factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//         }
//         return fact;
// }
// int ncr(int n,int r){
//     int num =factorial(n);
//     int denom = factorial(r)*factorial(n-r);
//     return num/denom;
// }
// int main(){
//     int  n,r;
//     cin>>n>>r;
//     int p=ncr(n,r);
//     cout<<p;
// }
// #include<iostream>
// using namespace std;
// void printCounting(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
// }
// }
// int main(){
//     int n;
//     cin>>n;
//     printCounting(n);
//     return 0;6

// }
//prime or not
// #include<iostream>
// using namespace std;
// bool isprime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isprime(n)){
//         cout<<"prime";
//     }
//     else{
//         cout<<"not prime";
//     }
// }

#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    
}