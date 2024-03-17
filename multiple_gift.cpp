#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll x,y;
    cin>>x>>y;
    ll maxlength=1;
    ll cur=x;
    while(true){
        ll t=cur*2;
        if(t>y||t==cur){
            break;
        }
        else{
            cur=t;
            maxlength++;
        }
    }
    cout<<maxlength;
return 0;
}