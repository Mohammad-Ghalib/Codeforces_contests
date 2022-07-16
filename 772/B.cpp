#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], ans=0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        if(n==2){ 
            cout << 0 <<"\n" << arr[0] << " " << arr[1] << "\n";
            continue;
        }

        for(int i=1; i<n-2; i++){
            if( (arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                arr[i+1] = std::max(arr[i], arr[i+2]);
                ans++;
            }
        }

        if( (arr[n-2] > arr[n-1]) && (arr[n-2] > arr[n-3])){
                //arr[n-2] = std::max(arr[n-3], arr[n-1]);
                arr[n-1] = arr[n-2];
                ans++;
        }

        cout << ans << "\n";

        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }

        cout << "\n";



    }

}