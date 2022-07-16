#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        for(int j=1; j<n; j++){
            int count = 0;
            for(int i=j+1; i<=n; i++){
                cout << i << " ";
                count ++;
            }

            int num = j;
            while(count < n){
                cout << num << " ";
                num--;
                count++;
            }

            cout << "\n";
        }

        cout << 1 <<" ";

        for(int i=n; i>1; i--){
            cout << i << " ";
        }

        cout << "\n";
    }

}