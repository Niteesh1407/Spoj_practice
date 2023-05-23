//link: https://www.spoj.com/problems/FCTRL/

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c;
    while(t--){
        int n,c=0;
        cin>>n;
        for(int i=5;n/i>=1;i*=5){
            c=c+n/i;
        }
        cout<<c<<endl;
    }
}
