#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], count =0, incount = 1;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0,j=1; i<n-1&&j<n; j++){
            //cin >> arr[i];
            if(arr[i] > arr[j]){
                //if(inco)
                i = j+1;
                j++;
                count++;
                //incount = 1;
            }
            else{
                //incount++;
                i++;
                //j++;
            }
        }

        cout << count << "\n";
    }

}