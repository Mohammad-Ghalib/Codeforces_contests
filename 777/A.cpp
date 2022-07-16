#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int rep = n/3, rem = n%3; 
        
        string s="";
        for(int i=0; i<rep; i++){
            s += "21";
        }

        if(rem == 0){
            cout << s << "\n";
        }
        else if(rem == 1){
            reverse(s.begin(), s.end());
            s += "1";
            cout << s << "\n";
        }
        else{
            s += "2";
            cout << s << "\n";
        }

        

    }

}