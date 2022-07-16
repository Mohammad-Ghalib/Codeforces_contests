#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long int hc,dc,hm,dm,k,w,a;

        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        bool b = false;

        for(long long int i=0; i<=k && !b; i++){

            long long int newHc = hc + i*a, newDc = dc +(k-i)*w;

            double n = ceil((double)newHc/(double)dm), rem = hm - n*newDc;
            //cout << "          " << n ;

            if(rem < 1){
                cout << "YES\n";
                b = true;
                break;
            }

        }

        if(!b){
            cout << "NO\n";
        }

    }
}