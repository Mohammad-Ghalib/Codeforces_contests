#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;

    while(t--){
        int n,k; cin >> n >> k;

        vector<pair<int,int>> ram(n);

        for(int i=0; i<n; i++){
            cin >> ram[i].first;
        }

        for(int i=0; i<n; i++){
            cin >> ram[i].second;
        }

        sort(ram.begin(), ram.end());

        int count =0;

        while(k>=ram[count].first && count < n){
            k += ram[count].second;
            count++;
        }

        cout << k <<"\n";

    }

}