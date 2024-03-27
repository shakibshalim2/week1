#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>watch(n,false);
    int sum=0;
    for(int i=0;i<n-1;i++){
        int episode;
        cin>>episode;
        watch[episode-1]=true;
    }   
    int missing=0;
    for(int i=0;i<n;i++){
        if(!watch[i]){
            missing=i+1;
            break;
        }
    } 
    cout<<missing<<endl; 
}