#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll n,b,x,y,sum=0,curr=0;
        cin >> n >> b >> x >> y;

        for(int i=0; i<n; i++){
            if((curr + x) > b){
                curr -= y;
                sum += curr;
            }
            else{
                curr += x;
                sum += curr;
            }
        }

        cout << sum << "\n";
    }

}