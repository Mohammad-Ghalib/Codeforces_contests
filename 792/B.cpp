#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll a,b,c; cin >> a >> b >> c;

        cout << a+b+c << " " << b+c << " " << c << "\n";
    }

}