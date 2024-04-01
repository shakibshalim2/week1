//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
int search(string pat,string txt){
        int patSize=pat.size();
        int txtSize=txt.size();

        if(patSize>txtSize){
            return 0;
        }
        vector<int>patFreq(26,0);
        vector<int>txtFreq(26,0);
        int count=0;
        for(int i=0;i<patSize;i++){
            patFreq[pat[i]-'a']++;
            txtFreq[txt[i]-'a']++;
        }
        if(patFreq==txtFreq){
            count++;
        }
        for(int i=patSize;i<txtSize;i++){
            txtFreq[txt[i]-'a']++;
            txtFreq[txt[i-patSize]-'a']--;
            if (patFreq==txtFreq) {
                count++;
            }
        }

        return count;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends