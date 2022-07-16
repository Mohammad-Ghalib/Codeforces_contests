#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll n, add = 1, d6 = 6, d4 = 4; cin >> n;

        if(n%d4==1 || n%4==3 || n==2){
            cout << -1 << "\n";
        }
        else{
            if(n%d4==0){
                if(n%d6==0){
                    cout << n/d6 << " " << n/d4 << "\n";
                }
                else if(n%d6==2){
                    cout << (n/d6) + add << " " << n/d4 << "\n";
                }
                else{
                    cout << (n/d6) + add << " " << n/d4 << "\n";
                }
            }
            else{
                if(n%d6==0){
                    cout << n/d6 << " " << n/d4 << "\n";
                }
                else if(n%d6==2){
                    cout << (n/d6) + add << " " << n/d4 << "\n";
                }
                else{
                    cout << (n/d6) + add << " " << n/d4 << "\n";
                }           
            }
        }
    }

}