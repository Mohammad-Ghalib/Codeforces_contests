#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t, max=0; cin >> t;
    while(t--){
        ll n; cin >> n;
        set<ll> s;
        multiset<ll> m;

        for(int i=0; i<n; i++){
            ll a; cin >> a;
            s.insert(a);
            m.insert(a);
        }

        set<ll>::iterator itr;

        for(itr = s.begin(); itr != s.end(); itr++) {
            //cout << *itr << " ";
            if(max < m.count(*itr)){
                max = m.count(*itr);
            }
        }

        cout << max << "   ";

        ll num = max, ans=0, rem = n-max;

        while(num != n){
            if(rem >= num){
                rem -= num;
                ans += num + 1;
                num *= 2;        
            }
            else{
                ans += rem;
                num += rem;
            }
        }

        cout << ans << "\n";
    }
}