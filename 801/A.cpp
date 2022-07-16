#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll m,n; cin >> m >> n;
        ll r,c,a, max=INT_MIN, ad=1;

        for(ll i=0; i<m; i++){
            for(ll j=0; j<n; j++){
                cin >> a;
                if(a > max){
                    max = a;
                    r = i;
                    c = j;
                }
            }
        }

        ll a1 = (abs(0-r) + ad)*(abs(0-c) + ad);
        ll a2 = (abs(0-r) + ad)*(abs(n-c));
        ll a3 = (abs(m-r))*(abs(0-c) + ad);
        ll a4 = (abs(m-r))*(abs(n-c));

        //cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << max <<"\n";

        ll ans;

        ans = std::max(a1,a2);
        ans = std::max(ans,a3);
        ans = std::max(ans,a4);

        cout << ans << "\n";

    }
}