#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    for(int k=1; k<=t; k++){
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int st =0, en =v.size()-1, ans = 0, pre =0;

        while(!v.empty()){

            if(v[st] < v[en]){
                if(v[st] >= pre ){
                    ans++;
                    pre = v[st];
                    v.erase(v.begin());
                    en = v.size()-1;
                }
                else{
                    v.erase(v.begin());
                    en = v.size()-1;
                }
            }
            else{
                if(v[en] >= pre ){
                    ans++;
                    pre = v[en];
                    v.erase(v.end()-1);
                    en = v.size()-1;
                }
                else{
                    v.erase(v.end()-1);
                    en = v.size()-1;
                }  
            }
        }

        cout << "Case #" << k << ": " << ans << "\n";

    }

}