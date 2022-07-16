#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        if(n==1){
            cout << "YES\n";
            continue;
        }
        else if(n==2){
            if(s[0] != s[1]){
                cout << "YES\n";
                continue;
            }
            else{
                cout << "NO\n";
                continue;
            }
        }
        else{
            cout << "NO\n";
            continue;
        }

    }
}