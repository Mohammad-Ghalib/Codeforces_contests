#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k;  cin >> n >> k;
        string s,p;  cin >> s;
        p = s;  reverse(p.begin(), p.end());
        if(s == p){
            cout << 1 <<"\n";
        }
        else{
            if(k==0) cout << 1 << "\n";
            else cout << 2 << "\n";
        }


    }
}