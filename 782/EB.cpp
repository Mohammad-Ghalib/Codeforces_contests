#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll arr[n], dif[n-1] = {0};
        bool pos = true, p3 = false, p2 = false;

        for(int i=0; i<n; i++) cin >> arr[i];

        for(int i=0; i<n-1 && pos; i++){
            dif[i] = arr[i+1] - arr[i];
            if(dif[i] > 3) pos = false;
            if(dif[i] ==3 ) p3 = true;
            if(dif[i] ==2 ) p2 = true;
        }

        if(n==1){
            cout << "YES\n";
            continue;
        }

        if(n==2){
            if(dif[0] <=3) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }

        if(p2 && p3){
            cout << "NO\n";
            continue;
        }
/*
        if(dif[0] == 3){
            if(dif[1] >=2) pos = false;
        }

        if(dif[n-2] == 3){
            if(dif[n-3] >=2) pos = false;
        }  */

        for(int i=1; i<n-1 && pos && !p3 && p2; i++){
            //if(dif[i] == 3){
                if((dif[i] ==2 && dif[i+1] ==2) || (dif[i] ==2 && dif[i-1] ==2) ) pos = false;
            //}
        }

        if(pos) cout << "YES\n";
        else cout << "NO\n";
    }
}