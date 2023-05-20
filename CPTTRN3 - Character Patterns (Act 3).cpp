//link: https://www.spoj.com/problems/CPTTRN3/

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        for(int i=0;i<2*r;i++){
            string str="*..";
            int a=i;
            for(int j=0;j<c;j++){
                if(a%2==0){
                    int k=3*c+1;
                    while(k--)
                    cout<<"*";
                    cout<<endl;
                    a=1;
                }
                cout<<str;
            }
            cout<<"*"<<endl;
        }
        int k=3*c+1;
        while(k--)
        cout<<"*";
        cout<<endl<<endl;
    }
}
