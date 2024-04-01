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
long long cnt=0;
int i=0,j=0;
while(i<n&&j<m){
        int aCount=0,bCount=0;
        int c=a[i];
        while(i<n&&a[i]==c){
            aCount++;
            i++;
        }
        while(c>b[j]&&j<m){
            j++;
        }
        while(j<m&&b[j]==c){
            bCount++;
            j++;
        }
        cnt+=aCount*bCount;
    }
    cout<<cnt<<"\n";
    return 0;
}