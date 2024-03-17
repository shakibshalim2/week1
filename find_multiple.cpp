#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int r=-1;
    int cr=a;
    while(c<=b){
        if(cr%c==0){
            r=cr;
            break;
        }
        cr++;
    }
    if(r==-1||r>b){
        cout<<-1;
    }
    else{
        cout<<r;
    }
}