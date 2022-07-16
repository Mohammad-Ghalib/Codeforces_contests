#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);

        int count =1, max=0;

        for(int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                count++;
            }
            else{ 
                if(count > max){
                    max = count;
                }
                count = 1;
            }
        }

        if(max < count){
            max = count;
        }

        int rem = n - max, ans=0;

        if(rem == 0){
            cout << ans <<"\n";
        }
        else{
            while(rem > max){
                rem -= max;
                max *= 2;
                ans++;
            }

            if(rem == 0){
                cout << ans <<"\n";
            }
            else{
                cout << ans+1 <<"\n";
            }
        }
    }
}