#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,result;
    cin>>s;
    int len = s.size();

    for(int i=len-1; i>=0; i--){
        result += s[i];
    }
    cout<<result<<endl;
    if(s==result){
        cout<<"yes";
    }
    else cout<<"no";
    return 0;
}
