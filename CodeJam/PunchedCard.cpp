#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t,count=1; cin >> t;
    while(t--){
        int r,c; cin >> r >> c;
        int row = 2*r+1, col = 2*c+1;

        cout << "Case #"<< count << ":\n";
        count++;

        int cr=0, cc=0;

        for(int i=0; i<col; i++){
            if(i<2) cout << ".";
            else if(i%2 == 0) cout << "+";
            else cout << "-";
        }
        cout << "\n";

        for(int i=0; i<col; i++){
            if(i<2) cout << ".";
            else if(i%2 == 0) cout << "|";
            else cout << ".";
        }
        cout << "\n";

        for(cr=2; cr<row; cr++){
            if(cr%2 == 0){
                for(int i=0; i<col; i++){
                    //if(cr%2 == 0){
                        if(i%2 ==0) cout << "+";
                        else cout << "-";
                    //}
                }
                cout << "\n";
            }
            else{
                for(int i=0; i<col; i++){
                    //if(cr%2 == 0){
                        if(i%2 ==0) cout << "|";
                        else cout << ".";
                    //}
                }
                cout << "\n";
            }
        }



    }
}