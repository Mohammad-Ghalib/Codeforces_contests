#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll l,r,a; cin >> l >> r >> a;
        if(l == r) cout << l/a + (l%a) << "\n";
        else{
            if(r%a == a-1){ cout << (r/a) + a -1 << "\n";
            }
            else{
                if(r-l >= a)
                    cout << (r/a) + a -2 << "\n";

                else{
                    if(l%a < r%a) cout << (r/a) + (r%a) << "\n";
                    else cout << (l/a) + a -1 << "\n";
                }
            }
        }
    }
}