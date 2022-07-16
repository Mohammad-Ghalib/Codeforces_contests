#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t, count=1; cin >> t;
    while(t--){
        int n, num=0; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for(int i=0; i<v.size(); i++){
            if( (num+1) <= v[i]) num++;
        }

        cout << "Case #" << count << ": " << num <<"\n";
        count++;
    }

}