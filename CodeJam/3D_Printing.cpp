#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t, count=1; cin >> t;
    while(t--){
        int c[3],m[3],y[3],k[3],ans[4]={0}, sum=0;

        for(int i=0; i<3; i++){
            cin >> c[i] >> m[i] >> y[i] >> k[i];
        }

        sort(c,c+3);
        sort(m,m+3);
        sort(y,y+3);
        sort(k,k+3);

        cout << "Case #" << count << ": ";
        count++;

        sum += c[0];
        ans[0] = c[0];
        if(sum <1000000){
            if(sum+m[0] >= 1000000){
                int temp = sum;
                temp = temp + m[0] - 1000000;
                //temp -= sum;
                ans[1] = m[0] - temp;
                for(int i=0; i<4; i++){
                    cout << ans[i] << " ";
                }
                cout << "\n";

            }
            else{
                ans[1] = m[0];
                sum += m[0];
                if(sum + y[0] >= 1000000){
                    int temp = sum;
                    temp = temp + y[0] - 1000000;
                    //temp -= sum;
                    ans[2] = y[0] - temp;
                    for(int i=0; i<4; i++){
                        cout << ans[i] << " ";
                    }
                    cout << "\n";                   

                }
                else{
                    ans[2] = y[0];
                    sum += y[0];
                    if(sum + k[0] >= 1000000){
                        int temp = sum;
                        temp = temp + k[0] - 1000000;
                        //temp -= sum;
                        ans[3] = k[0] - temp;
                        for(int i=0; i<4; i++){
                            cout << ans[i] << " ";
                        }
                        cout << "\n";     

                    }
                    else{
                        cout << "IMPOSSIBLE\n";
                    }
                }
            }
        }
        else{
            for(int i=0; i<4; i++){
                cout << ans[i] << " ";
            }
            cout << "\n";     

        }

    }
}