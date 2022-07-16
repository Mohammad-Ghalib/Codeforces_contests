#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n, sum1=0, sum2=0; cin >> n;

        for(int i=0; i<3; i++){
            sum1 += n%10;
            n/=10;
        }
        for(int i=0; i<3; i++){
            sum2 += n%10;
            n/=10;
        }

        if(sum1 == sum2) cout << "YES\n";
        else cout << "NO\n";

    }
}