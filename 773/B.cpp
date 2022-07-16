#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n, loop=0; cin >> n;
    

        //multiset<int> m;
        set<int> s;
        int a;

        for(int i=0; i<n; i++){
            cin >> a;
            //m.insert(a);
            s.insert(a);
        }

        for(int i=1; i<=n; i++){
            cout << std::max(i,(int)s.size()) << " ";
        }

        cout << "\n";

    }

}
