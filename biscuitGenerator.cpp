#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,t,i;
    cin>>a>>b>>t;
    int r=0;
    for(i=a;i<=t;i+=a){
            r+=b;
    }
    cout<<r;
}