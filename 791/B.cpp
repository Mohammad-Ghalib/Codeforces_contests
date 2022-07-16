#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q; cin >> n >> q;

    ll arr[n], sum=0, k, in, x, num;
    set<ll> s;
    bool b = false;

    for(ll i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0; i<q; i++){
        cin >> k;
        if(k==1){
            cin >> in >> x;
            if(b){

                if(s.find(in) != s.end()){
                    sum += x - arr[in-1];
                    arr[in-1] = x;
                }
                else{
                    sum += x - num;
                    arr[in-1] = x;
                    s.insert(in);
                }
            }
            else{
                sum += x - arr[in-1];
                arr[in-1] = x;
            }

            cout << sum << "\n";
        }
        else{
            cin >> x;
            sum = n*x;
            //for(int j=0; j<n; j++) arr[j] = x;
            num = x;
            b = true;
            s.clear();
            cout << sum << "\n";
        }
    }

}