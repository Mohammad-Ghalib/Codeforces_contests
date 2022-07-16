#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    for(int j=1; j<=t; j++){
        int n,m,sum=0; cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        cout << "Case #" << j << ": "<<sum%m << "\n";

    }

}