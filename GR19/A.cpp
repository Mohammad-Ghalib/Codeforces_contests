#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> v,k;

        //int arr[n], max=INT_MAX, in=0;

        for(int i=0; i<n; i++){
            int a;
            //cin >> arr[i];
            cin >> a;
            v.push_back(a);
            // if(arr[i] <= max){
            //     max = arr[i];
            //     in = i;
            // }
        }

        k = v;
        sort(k.begin(), k.end());
        //n--;

        //cout << max <<" " << in << " " << n;

        if(k == v){ cout << "NO\n";}
        else cout << "YES\n";
    }
}