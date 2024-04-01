#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    long long sum=0;
    long long Odd=INT_MAX;

    for(int i=0;i<n;i++){
        long long n;
        cin>>n;
        sum+=n;
        if(n%2==1){
            Odd=min(Odd,n);
        }
    }
    if(sum%2==0){
        cout<<sum<<endl;
    } 
    else{
        cout<<sum-Odd<<endl;
    }
    return 0;
}
