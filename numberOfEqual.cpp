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
int cnt=0;
int i=0,j=0;
while(i<n&&j<m){
    if(a[i]==b[j]){
        int aCount=1,bCount=1;
        while(i+1<n&&a[i+1]==a[i]){
            aCount++;
            i++;
        }
        while(j+1<m&&b[j+1]==b[j]){
            bCount++;
            j++;
        }
        cnt+=aCount*bCount;
        i++;
        j++;
    }
    else if(a[i]<b[j]){
        i++;
    }
    else{
        j++;
    }
}
    cout<<cnt;
}