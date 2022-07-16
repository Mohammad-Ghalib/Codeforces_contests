#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        double arr[n], sum =0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        bool b = false;
        //cout << sum;

        for(int i=0; i<n; i++){
            double num = (sum - arr[i])/((double)n-(double)1);
            //cout << num;
            setprecision(3);
            if(arr[i] == num){
                b = true;
                break;
            }
        }

        if(b) cout << "YES\n";
        else cout << "NO\n";
    } 

}