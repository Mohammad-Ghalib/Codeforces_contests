#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n%2) cout << -1 << "\n";
        else cout << 0 << " " <<  0 << " " << n/2 << "\n";
    }

}