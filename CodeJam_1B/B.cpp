#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    for(int k=1; k<=t; k++){
        int n,p; cin >> n >> p;
        long long arr[n][p], ans=0, curr=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<p; j++){
                cin >> arr[i][j];
            }
        }

        for(int i=0; i<n; i++){
            sort(arr[i], arr[i]+p);
        }

        for(int i=0; i<n; i++){
            if(curr < arr[i][0]){
                ans += arr[i][p-1] - curr;
                curr = arr[i][p-1];
            }
            else if(curr > arr[i][p-1]){
                ans += curr - arr[i][0];
                curr = arr[i][0];
            }
            else{
                if(  ( (arr[i][p-1] - curr) + (arr[i][p-1] - arr[i][0]) ) < ( (arr[i][p-1] - arr[i][0]) + (curr - arr[i][0]) ) ){
                    ans += (arr[i][p-1] - curr) + (arr[i][p-1] - arr[i][0]);
                    curr = arr[i][0];
                }
                else{
                    ans +=  ( (arr[i][p-1] - arr[i][0]) + (curr - arr[i][0]) );
                    curr = arr[i][p-1];
                }
            }
        }

        cout << "Case #" << k << ": " << ans << "\n";

    }

}