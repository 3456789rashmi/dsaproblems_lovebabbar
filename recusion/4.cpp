#include<iostream>
using namespace std;
bool check(string s,int i,int j){
    i=0;
    j=s.length()-1;
    if(i>=j) return true;
    if(s[i]==s[j]){
        i++;
        j--;
    }
    return check(s,i,j);
}
int main(){
    string s;
    cin>>s;
    cout<<check(s,0,s.length()-1);
    return 0;
}