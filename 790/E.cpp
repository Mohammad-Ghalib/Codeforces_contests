#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){

    int t; cin >> t;
    while(t--){
        ll n,q, sum=0, num; cin >> n >> q;

        vector <ll> v(n), qu(q), tot(n);
        vector<pair<ll,ll>> que(q), ans(q);

        for(int i=0; i<n; i++){
            cin >> v[i];
            //sum += v[i];
            //tot[i] = sum;
        }

        sort(v.begin(), v.end(), greater<int>());

        tot[0] = v[0]; //cout << v[0] << " " << v[1] << " ";
        
        for(int i=1; i<n; i++){
            tot[i] = tot[i-1] + v[i];
        }

        for(int i=0; i<q; i++){
            cin >> num;
            que[i] = make_pair(num,i);
            ans[i] = make_pair(-1,i);
        }

        sort(que.begin(), que.end());

        ll v1=0, v2=0;

        while(v1 < n && v2 < q){
            if(que[v2].first <= tot[v1]){
                ans[v2] = make_pair(v1+1,que[v2].second);
                v2++;
            }
            else v1++;
        }

        while(v2<q){
            ans[v2] = make_pair(-1,que[v2].second);
            v2++; 
        }

        sort(ans.begin(), ans.end(), sortbysec);

        for(int i=0; i<q; i++){
            cout << ans[i].first << "\n";
        }
    }
}