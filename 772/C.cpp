#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], count = 0;

        for(int i=0; i<n; i++) cin >> arr[i];

        if(arr[n-2] > arr[n-1]){
            cout << -1 << "\n";
            continue;
        }

        for(int i=0; i<n-2; i++){
            if(arr[i] > arr[i+1]) count++;
        }

        cout << count << "\n";

        for(int i=n-3; i>=0 && count; i--){
            if(arr[i] > arr[i+1]){
                if( (arr[i+1] - arr[n-1]) <= arr[i+1]){
                    cout << i+1 << " " << i+2 << " " << n << "\n";
                }
            }
        }
    }
}