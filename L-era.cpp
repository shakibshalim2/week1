#include<bits/stdc++.h>
using namespace std;
int operation(vector<int>&x){
    int op=0;
    int ans=1;
    for(int i=0;i<x.size();i++){
        if(x[i]>ans){
            op+=x[i]-ans;
            ans=x[i];
        }
        ans++;
    }
    return op;
}
int main(){
int n;
cin>>n;
while(n--){
    int t;
    cin>>t;
    vector<int>a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    cout<<operation(a)<<endl;
}
}