#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v,s,o,e,os,es;

        for(int i=0; i<n; i++){
            int a; cin >> a;
            v.push_back(a);
        }

        s=v;  sort(s.begin(), s.end());

        if(s == v){
            cout << "YES\n";
        }
        else{

            for(int i=0; i<n; i++){
                //int a; cin >> a;
                //v.push_back(a);
                if(v[i]%2 == 0) e.push_back(v[i]);
                else o.push_back(v[i]);
            }

            os = o; sort(os.begin(), os.end());
            es = e; sort(es.begin(), es.end());

            if((os == o) && (es == e)){
                cout << "YES\n";
            }
            else cout << "NO\n";

        }
    }
}