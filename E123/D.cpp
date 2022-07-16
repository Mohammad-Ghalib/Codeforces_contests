#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){

        //ll ans;
        int n,m,k,q;  cin >> n >> m >> k >> q;
        set<vector<vector<int>>> s;

        vector<pair<int,int>> vec;
        int a,b;
        for(int i=0; i<q; i++){
            cin >> a >> b;
            cout << a << " " << b << "\n";
            vec.push_back(make_pair(a,b));
            //cout << 1;
        }
        cout << vec[0].first << " " << vec[0].second << "\n";

        vector<vector<int>> v( n , vector<int> (m, 0));

        for(int i=0; i<q; i++){
            cout<< 1 << "\n";
            for(int j=1; j<=k; j++){

                for(int r=0; r<m; r++){
                    v[vec[i].first][r] = j;
                }

                for(int c=0; c<n; c++){
                    v[c][vec[i].second] = j;
                }

                cout << v[0][0] << " ";

                s.insert(v);
            }
            //ans = s.size()%998244353;
        }

        cout << (s.size())%998244353 << "\n";
    }
}