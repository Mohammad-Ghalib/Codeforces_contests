#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int nO=1, nE=2;
        if(k==1){
            cout << "YES\n";
            for(int i=0; i<n; i++) cout << i+1 <<"\n";
        }
        else if(n%2==1) cout << "NO\n";
        else if((n%2 == 0)){
            cout << "YES\n";
            for(int i=0; i<n/2; i++){
                for(int j=0; j<k; j++){
                    cout << nO <<" ";
                    nO += 2;
                }
                cout << "\n";
            }
            for(int i=0; i<n/2; i++){
                for(int j=0; j<k; j++){
                    cout << nE <<" ";
                    nE += 2;
                }
                cout << "\n";
            }
        }


    }
}