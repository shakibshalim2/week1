#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--) {
        int n;
        string s,ss;
        cin>>n>>s>>ss;
        ss+=ss;
        int result=0,cnt=0;
        if(s[0]=='g'){
        cout<<0<<endl;
        } 
        else{
            bool started=false;
            for (int i=0;i<ss.size();i++){
                if(ss[i]=='g'){
                    result=max(result,cnt);
                    cnt=0;
                    started=false;
                }
                else if(ss[i]==s[0]&&!started){
                    cnt=1;
                    started=true;
                } 
                else if(started){
                    cnt++;
                }
            }
            cout<<result<<endl;
        }
    }
    return 0;
}
