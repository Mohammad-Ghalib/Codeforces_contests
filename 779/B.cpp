#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;

        if(n%2 == 1){ 
            cout << 0 << "\n";
            continue;
        }
        else{
            ll num = 1, mod = 998244353, mul = n/2;
            

            for(int i=0; i<n/2; i++){
                num = num*mul*mul;
                mul--;
                num %= mod;
            }

            cout << num << "\n";
        }
    }

}