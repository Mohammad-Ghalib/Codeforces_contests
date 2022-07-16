#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool pos(int arr[n][m], int n, int m){

    if()
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int arr[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
            }
        }

        if(pos(arr[n][m], n, m)) cout << "YES\n";
        else cout << "NO\n";
    }

}