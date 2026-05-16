#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int choti = fact(n-1);
    int badi = n*choti;
    return badi;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
}