#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll n, a;  cin >> n;
        ll ans=0;

        for(int i=0; i<n; i++){
            cin >> a;
            ans |= a;
        }

        cout << ans <<"\n";
    }


}