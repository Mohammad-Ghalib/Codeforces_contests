#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        float x,y; cin >> x >> y;

        if(x==0 && y==0) cout << 0 << "\n";
        else if(sqrt(x*x + y*y) == (int)sqrt(x*x + y*y)) cout << 1 << "\n";
        else cout << 2 << "\n";
    
    }
}