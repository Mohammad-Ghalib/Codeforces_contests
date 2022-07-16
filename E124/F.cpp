#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,c,r; cin >> n;
    vector<pair<int,int>> mana(n);

    for(ll i=0; i<n; i++){
        cin >> c >> r;
        mana[i] = make_pair(c,r);
    }

    ll q,t,h; cin >> q;
    vector<pair<int,int>> mons(q);
    for(int i=0; i<q; i++){
        cin >> t >> h;
        mons[i] = make_pair(t,h);
    }

    int t=0;
    vector<pair<int,int>> mons(q), curr;

    ll last = mons[q-1].first + n; 

    for(ll i=0; i<last; i++){
        ll j = 0;
        while(mons[j].first <= i ){
            curr.push_back(mons[j]);
        }

        for(int k=0; k<curr.size(); k++){
            
        }
    }



}