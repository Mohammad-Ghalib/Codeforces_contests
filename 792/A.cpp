#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s = to_string(n);
        if(s.size() == 2) cout << s[1] << "\n";
        else{
            sort(s.begin(), s.end());
            cout << s[0] << "\n";
        }
    }

}