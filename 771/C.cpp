#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n, num=0,count=0; cin >> n;
        int arr[n];

        vector<pair<int,int>> v;
        vector<int> vec,so;
        int max = INT_MIN, min = INT_MAX;
        
        //cin >> arr[0];
        //num = arr[0];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            vec.push_back(arr[i]);
            

            if(arr[i] > num) {
                count++;
                num = arr[i];
                if(i>0){
                    v.push_back(make_pair(max,min));
                }
                min = arr[i];
                max = arr[i];
            }
            else{

                if(arr[i] > max) max = arr[i];
                if(arr[i] < min) min = arr[i];

            }
            //else num = arr[i];
        }

        so = vec;  sort(so.begin(), so.end());
        if(so == vec){
            cout << n << "\n";
            continue;
        }
        else{

        v.push_back(make_pair(max,min));
        //cout<< v.size() << " ";


    /*    for(int i=0; i<v.size(); i++){
            cout << v[i].first << " " << v[i].second << "\n";
        } */


        
        for(int i=0; i<v.size(); i++){
            //int ind = 0;
            for(int j=i+1; j<v.size(); j++){
                if(v[i].first > v[j].second){
                    v.erase(v.begin()+i);
                    //if(v[i].first > v[j].first)

                    count--;
                    //ind++;
                    i=-1;
                    break;
                }
            }
        }
        //if(count <=0) count = 1;

        cout << count <<"\n";

        }
    }

}