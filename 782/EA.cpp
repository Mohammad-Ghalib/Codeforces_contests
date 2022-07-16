#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int m = INT_MAX, mini = 1;

        for(int i=0; i<s.size()-1; i++){
            if(s[i] == s[i+1]) mini++;
            else{
                m = min(m,mini);
                mini = 1;
            }
        }

        if(s[s.size()-1] != s[s.size()-2]) m=1;

        if(m==1 || s.size() == 1) cout << "NO\n";
        else cout << "YES\n";
    }

}