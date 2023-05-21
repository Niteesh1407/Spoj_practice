//link: https://www.spoj.com/problems/NSTEPS/

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b && a%2==0)
        cout<<(2*a)<<endl;
        else if(a==b && a%2!=0)
        cout<<(2*a-1)<<endl;
        else if((a-b)==2 && a%2==0)
        cout<<(2*a-2)<<endl;
        else if((a-b)==2 && a%2!=0)
        cout<<(2*a-3)<<endl;
        else
        cout<<"No Number"<<endl;
    }
}
