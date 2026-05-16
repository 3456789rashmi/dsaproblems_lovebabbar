// class Solution {
//     public:
//     int reverse(int x){
//         int ans=0;
//         while(x|=0){
//             int digit = x %10;
//             if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
//                  return 0;
//             }
//             ans = (ans*10)+digit;
//             x=x/10;
//         }
//         return ans;
//     }

// };
// class Solution{
//     public:
//     int bitwisecomplement(int x){
//         int m = x;
//         int mask = 0;
//edge case
// if(n==0){
//     return 1;
// }
//         while(m!=0){
//             mask = (mask<<1) | 1;
//             x=m>>1;
//         }
//         int ans = (~x)&mask;
//         return ans;
// }
// };

// class Solution{
//     public:
//     bool poweroftwo(int n){
//         for(int i=0;i<=30;i++){
//             int ans = pow(2,i);
//             if(ans==1){
//                 return true;
//             }
//         }
//         return false;
//     }
// };
#include<iostream>
#include<conio.h>
using namespace std;
class score{
    private:int val;
    private:score(){
        val=0;
    }
    void operator++()
    {val=val+1;}
    int show(){
        return (val);
    }
};
int main(){
    score s1,s2;
    cout<<S1.show();
    cout<<s2.show();
    ++S1;
    ++s2;
    cout<<s1.show();
    cout<<s2.show();
    getch();
    return 0;
}