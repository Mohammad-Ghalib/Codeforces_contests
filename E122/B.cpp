#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        if(s=="0" || s=="1" || s=="00" || s=="11" || s=="01" || s=="10"){
            cout << 0 <<"\n";
            continue;
        }

        int count0=0, count1=0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
        }

        if(count0 > count1){
            if(count1 !=0) cout << count1 <<"\n";
            else cout << 0 << "\n";
        }
        else if(count0 < count1){
            if(count0 !=0) cout << count0 <<"\n";
            else cout << 0 << "\n";
        }
        else if(count0 == count1){
            cout << count0 - 1 << "\n";
        }
    }
}