#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], count[101] = {0};

        for(int i=0; i<n; i++){
            cin >> arr[i];
            count[arr[i]]++;
        }

        if(count[0] > 0){
            cout << n - count[0] << "\n";
        }
        else{
            bool rep = false;
            for(int i=1; i<101 && !rep; i++){
                if(count[i] > 1) rep = true;
            }

            if(rep) cout << n << "\n";
            else cout << n+1 << "\n";
        }
    }

}