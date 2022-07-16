#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;

    while(t--){

        string s;  cin >> s;

        auto r = s.find('r');
        auto g = s.find('g');
        auto b = s.find('b');
        auto R = s.find('R');
        auto G = s.find('G');
        auto B = s.find('B');

        if( (r<R) && (g<G) && (b<B)) cout << "YES\n";
        else cout << "NO\n";

    }

}