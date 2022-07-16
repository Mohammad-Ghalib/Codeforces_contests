#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, a; cin >> n;
        //set<int> s;
        int arr[n], mi=INT_MAX, p;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            //s.insert(a);

            if(arr[i] < mi){
                mi = arr[i];
                p = i+1;
            }
        }

        if(n%2 == 1) cout << "Mike\n";
        else{
            if(p%2 == 0) cout << "Mike\n";
            else cout << "Joe\n";
        }
    }

}