#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q,k,x,y,x1,y1,x2,y2; cin >> n >> q;
    ll mat[n][n] = {0};
    for(int i=0;i<n;i++){
        //mat[i] = {0};
        for(int j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    for(int i=0; i<q; i++){
        cin >> k;
        if(k==1){
            cin >> x >> y;
            mat[x-1][y-1] = 1;
        }
        else if(k==2){
            cin >> x >> y;
            mat[x-1][y-1] = 0;
        }
        else{
            cin >> x1 >> y1 >> x2 >> y2;
            for()
        }
    }

}