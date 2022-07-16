#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n, index, index2; cin >> n;
        int arr[n];
        bool b = true, d= true;;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            if( (arr[i] != (i+1)) && b ){
                index = i;
                b = false;
            }
        }

        int num = index+1;

        for(int i=index+1; i<n && !b && d; i++){
            //cin >> arr[i];
            if( (arr[i] == num) && d ){
                index2 = i;
                d = false;
            }
        }

        if(b&&d){
            for(int i=0; i<n; i++){
                cout << arr[i] << " ";
            }
        }
        else{
            for(int i=0; i<index; i++){
                cout << arr[i] << " ";
            }

            for(int i=index2; i>=index; i--){
                cout << arr[i] << " ";
            }

            for(int i=index2+1; i<n; i++){
                cout << arr[i] << " ";
            }

        }

        cout << "\n";

    }

}