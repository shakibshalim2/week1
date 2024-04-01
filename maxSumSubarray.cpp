#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
         N=Arr.size();
         int mSum=0;
         int cnt=0;
         for(int i=0;i<K;i++){
             cnt+=Arr[i];
         }
         mSum=cnt;
        for(int i=K;i<N;i++){
             cnt+=Arr[i]-Arr[i-K];
             mSum=max(mSum,cnt);
         }
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 