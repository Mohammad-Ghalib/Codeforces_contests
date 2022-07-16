#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n,ans=0; cin >> n;
        string s; cin >> s;

        for(int i=0; i<n-2; i++){
            if(s[i] == '0' && s[i+1] == '0') ans += 2;
            else if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' ) ans += 1;
        }

        if(s[n-2] == '0' && s[n-1] == '0') ans += 2;

        cout << ans << "\n";
    }

}