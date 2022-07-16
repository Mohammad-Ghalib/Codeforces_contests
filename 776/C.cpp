#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n, m, w=0;

        vector<pair<int,int>> v(m);
        int arr1[n], arr2[n], arr[n];

        for(int i=0; i<m; i++){
            cin >> v[i].second;
            cin >> v[i].first;
        }

        sort(v.begin(), v.end());

        for(int i=0; i<2*n; i++){
            w += v[i].first;
            arr[i] = v[i].second;
        }

        cout << w << "\n";

        sort(arr, arr+n);

        for(int i=0; i<n/2; i++){
            arr1[i] = arr[i];
        }
        sort(arr1, arr1+n, greater<int>());

        for(int i=n/2,j=0; i<n; i++){
            arr2[j] = arr[i];
            j++;
        }

        for(int i=0; i<n; i++){
            if(i%2 == 0) cout << arr1[i] << " " << arr[i]+1 <<"\n";
            else cout << arr2[i] << " " << arr[i]+1 << "\n";
        }
    }

}