#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], c=0, ne1, nel, f,l;
        vector<int> v0;
        bool f=false, l=false;

        for(int i=0; i<n; i++){
            cin >> arr[i];

            if(arr[i] < 0){
                c++;
                if(!f){
                    ne1 = i;
                    f = arr[i];
                }
                else{
                    nel = i;
                    l = arr[i];
                }
            }
            else if(arr[i] == 0){
                v0.push_back(i);
            }
        }

        if(c%2 == 1){
            if()
        }

    }
}