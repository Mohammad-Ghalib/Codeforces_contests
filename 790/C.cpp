#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    //cout <<abs(("cost") - ("best"));
    //cout << 'c' - 'a';

    int t; cin >> t;
    while(t--){
        int n,m,ans=INT_MAX; cin >> n >> m;

        string s[n];
        int arr[n] = {0};

        for(int i=0; i<n; i++){
            cin >> s[i];
            /*
            for(int j=0; j<m; j++){
                s[i][j] =((s[i][j]) -('a'));
                cout << s[i][j] << " ";
            }
            cout << s[i] << " ";    */
            //arr[i] = to_integer(s[i]);
        }

        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){

                int t=0;
                for(int k=0; k<m; k++){
                    //int t;
                    t += abs(s[i][k] - s[j][k]);
                }
                ans = min(ans, t);
            }
        }

        //sort(arr, arr+n);

        //cout << arr[1] - arr[0] << "\n";

        cout << ans << "\n";
    }
}