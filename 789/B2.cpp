#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s,count;
        cin >> s;
        int c=1, ans=0, index;


        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]) c++;
            else{

                if(c%2==1){
                    //count += to_string(c);
                    ans++;
                    i++;
                    //c = 1;
                }
                c = 1;
            }
        }

        cout << ans << "\n";




        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]) c++;
            else{
                count += to_string(c);
                c = 1;
            }
        }

        count += to_string(c);

        //cout << count << "    ";

        int num = count.size();

        bool odd = false;

        for(int i=0; i<count.size(); i++){
            //ans += min(2,count[i]);
            if( !odd && ((int)count[i])%2 == 1 ){
                odd = true;
                //cout << "   " << i << "    ";
                index = i;
                break;
            }
        }
  




    }
}