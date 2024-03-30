#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string a[3][n];
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        unordered_map<string,int>f;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                f[a[i][j]]++;
            }
        }
        for(int i=0;i<3;i++){
            int points=0;
            for(int j=0;j<n;j++){
                if(f[a[i][j]]==1){
                    points+=3;
                }
                else if(f[a[i][j]]==2){
                    points+=1;
                }
            }
            cout<<points<<" ";
        }
        cout<<"\n";
    }

}