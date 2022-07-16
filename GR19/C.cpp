#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, sum=0, div =2; cin >> n;
        long long arr[n]; 
        cin >> arr[0];

        bool b = false, d = false;

        for(long long  i=1; i<n-1; i++){
            cin >> arr[i];
            sum += (long long)((arr[i]+1)/div);
            if(!b && (arr[i]%2 == 0)) b =true;
        }

        cin >> arr[n-1];



        if(b) cout << sum << "\n";
        else{

            if(n == 3) cout << -1 << "\n";

            else{
            
                for(long long i=1; i<n-1 && !d; i++){
                    //cin >> arr[i];
                    //sum += ceil(arr[i]/2);
                    if( arr[i] > 1) d =true;
                }

                if(d) cout << sum << "\n";
                else cout << -1 <<"\n";

            }

        }
    }
}