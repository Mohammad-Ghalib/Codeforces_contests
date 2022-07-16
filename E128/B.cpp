#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        char c[n][m];
        pair<int,int> f,cf;
        bool b = false, bcf = false;
 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> c[i][j];
            }
 
        }

        int flag = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!b && c[i][j] == 'R'){
                    f.first = i;
                    f.second = j;
                    b = true;
                }
 
                else if(c[i][j] == 'R'){
                    if(j<f.second){
                        flag++;
                        break;
                    }
                }
            }
 
        }
 
        
 
        if(!flag) cout << "YES\n";
        else cout << "NO\n";
    }
}