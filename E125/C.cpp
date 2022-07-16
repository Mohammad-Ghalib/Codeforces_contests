#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n, ans; cin >> n;
        string s; cin >> s;

        for(int i=1; i<s.size(); i++){
            string s1 = s.substr(0,i), s2 = s1;
            reverse(s2.begin(), s2.end());

            if((s1.size() > 1) && s1==s2){
                s.erase(0,i+1);
                ans++;
            }
            else if(n%2==1){
                int sum=0;
                for(int j=0; j<s1.size(); j++){
                    sum += (int)(s1[j]);
                }

                if(sum%71 == 0) {
                    s.erase(0,i+1);
                    ans++;
                }
            }


        }

        cout << ans << " " <<s.size() <<"\n";
    }

}