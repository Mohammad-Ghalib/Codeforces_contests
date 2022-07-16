#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        ll sum = 0 , mini = INT_MAX;

        for(int i=0; i<n; i++){
            cin >> v[i];

            sum += v[i];
            mini = min(mini, v[i]);
        }

        cout << sum - n*mini << "\n";

    }
}