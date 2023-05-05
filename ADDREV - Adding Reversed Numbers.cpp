//link: https://www.spoj.com/problems/ADDREV/

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,i=0;
        string s1="",s2="";
        cin>>a>>b;
        s1=to_string(a);
        s2=to_string(b);
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        a=stoi(s1);
        b=stoi(s2);
        a=a+b;
        while(a%10==0){
            a/=10;
        }
        s1=to_string(a);
        reverse(s1.begin(),s1.end());
        cout<<endl<<s1;
    }
} 
