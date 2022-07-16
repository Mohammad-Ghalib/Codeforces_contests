#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, xor=0; cin >> m;
    vector<vector<int>> v;
    for(int i=0; i<m; i++){
        int n;  cin >> n;
        //int arr[n];
        for(int j=0; j<n; j++){
            int num;  cin >> num;
            v[i][j].push_back(num);
            xor ^= num;
        }
    }

    if(xor != 0){
        cout << "NO";
    }
    else{
        cout << "YES\n";
        
    }
}