#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if(n==2){
            cout << 0 << " " << 1 << "\n";
            //printf("%d %d\n",0,1);
            continue;
        }
        else if(n==3){
            cout << 2 << " " << 0 << " " << 1 << "\n";
            //printf("%d %d %d\n",2,0,1);
            continue;
        }
        // else if(n==4){
        //     cout << 2 << " " << 0 << " " << 1 << " " << 3 <<"\n";
        // }
        else{
            int k = (int)log2(n-1), min = 1 << k, rem = n-min;
            for(int i=1; i<min; i++){
                cout << i <<" ";
                //printf("%d ", i);
            }

            cout << 0 << " " << min << " ";
            min++;

            if(rem !=0){
                rem--;

                while(rem--){
                    cout << min << " ";
                    //printf("%d ", min);
                    min++;
                } 
            }

            cout << "\n";
        }

    }

}