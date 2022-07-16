#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        char c; cin >> c;
        bool b = false;

        for(int i=0; i<s.size(); i++){
            if((s[i] == c) && (i%2 == 0)) b = true;
        }

        if(b) cout << "YES\n";
        else cout << "NO\n";
    }
}