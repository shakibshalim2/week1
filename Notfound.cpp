#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool w[26]={false};

    for(char ch:s){
        w[ch-'a']=true;
    }
    char missing='a';
    while(missing<='z'&&w[missing-'a']){
        missing++;
    }
    if(missing<='z'){
        cout<<missing<<endl;
    }
    else{
        cout<<"None"<<endl;
    }
}