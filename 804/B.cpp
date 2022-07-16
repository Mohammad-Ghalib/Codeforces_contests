#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        int rep = m/4, rem=m%4;
        string s1="1 0 0 1 ", s2="0 1 1 0 ", as1="", as2="";

        for(int i=0; i<rep; i++){
            as1 += s1;
            as2 += s2;
        }

        if(rem){
            as1 += s1.substr(0, 4);
            as2 += s2.substr(0, 4);
        }



        for(int i=0; i<n; i++){
            
            if( (i%4)==0 || (i%4)==3 ) cout << as1 << "\n";
            else cout << as2 << "\n";
        }
    }

}