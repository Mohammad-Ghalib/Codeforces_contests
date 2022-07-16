#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int l1,l2,r1,r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if((l1<=r2 && l1>=l2) || (l2<=r1 && l2>=l1)) cout << max(l1,l2) << "\n";
        else cout << l1+l2 << "\n";
    }

}