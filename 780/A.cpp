#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;

        if(a==0){
            cout << 1 << "\n";
            continue;
        }
        else if(b==0){
            cout << a+1 << "\n";
        }
        else{
            cout << a+2*b+1 << "\n";
        }
    }
}