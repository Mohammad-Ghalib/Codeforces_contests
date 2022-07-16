#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        ll arr[n];
        

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        if(n >= k){
            cout << 0 << "\n";
            continue;
        }
        else{

            sort(arr, arr+n);


        }
    }
}