#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>merge;
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]<=b[j]){
            merge.push_back(a[i]);
            i++;
        }
        else{
            merge.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        merge.push_back(a[i]);
        i++;
    }
    while(j<m){
        merge.push_back(b[j]);
        j++;
    }
    for(int num:merge){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}