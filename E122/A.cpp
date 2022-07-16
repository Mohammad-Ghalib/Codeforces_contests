#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n;  cin >> n;

        int rem = n%7, d=n%10;
        if(rem == 0){
            cout << n <<"\n";
            continue;
        }
        if(d>rem){
            n = n-rem;
        }
        else{
            n = n + 7 - rem;
        }

        int d1=n%10, d2=(n/10)%10, d3=(n/100);

        if(n < 10){
            cout << 14 <<"\n";
            continue;
        }

        // if(d1 == 0){
        //     cout << n + 7 << "\n";
        // }
        
            cout << n <<"\n";

    }
}