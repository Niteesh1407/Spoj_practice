//link: https://www.spoj.com/problems/ONP/

CODE:

#include<bits/stdc++.h>
using namespace std;
int pre(char ch){
    if(ch=='^')
    return 3;
    else if(ch=='/' || ch=='*')
    return 2;
    else if(ch=='+' || ch=='-')
    return 1;
    else
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        stack<char>st;
        string r="";
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z')
            r=r+s[i];
            else if(s[i]=='(')
            st.push('(');
            else if(s[i]==')'){
                while(st.top() != '('){
                    r+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && pre(s[i]) <= pre(st.top())){
                    r+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            r+=st.top();
            st.pop();
        }
        cout<<r<<endl;
    }
}
