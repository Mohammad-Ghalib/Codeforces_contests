#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        ll n, a=1, mul=3; cin >> n;

        if(n>19){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(int i=0; i<n; i++){
                cout << a << " ";

                a *= mul;
            }

            cout << "\n";
        }
    }

}