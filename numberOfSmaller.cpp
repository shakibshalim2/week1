#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&a,int target){
int left=0;
int right=a.size();
while(left<right){
    int mid=(left+right)/2;
    if(a[mid]>=target){
        right=mid;
    }
    else{
        left=mid+1;
    }
}
return left;
}
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
sort(a.begin(),a.end());
for(int i=0;i<m;i++){
    cout<<search(a,b[i])<<" ";
}

}