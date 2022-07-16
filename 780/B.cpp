#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], max=INT_MIN, max2 = INT_MIN, sum=0, pos;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] > max){
                max = arr[i];
                pos = i;
            }
        }

        arr[pos] = 0;

        for(int i=0; i<n; i++){
            //cin >> arr[i];
            if(arr[i] > max2){
                max2 = arr[i];
                //pos = i;
            }
        }

        if(max - max2 <= 1) cout << "YES\n";
        else cout << "NO\n";

    }
}