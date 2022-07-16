#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;

        vector<pair<long long int,long long int>> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i].first;
        }

        for(int i=0; i<n; i++){
            cin >> v[i].second;
        }

        sort(v.begin(), v.end());

        for(int i=0; i<n; i++){
            if(v[i].first > v[i].second){
                long long int temp = v[i].first;
                v[i].first = v[i].second;
                v[i].second = temp; 
            }
        }

        long long int max1 = 0, max2 = 0;

        for(int i=0; i<n; i++){
            if(v[i].first > max1){
                max1 = v[i].first;
            }
            if(v[i].second > max2){
                max2 = v[i].second;
            }

        }

        // sort(v.begin(), v.end());

        // int max1 = v[n-1].first;

        // std::partial_sort(v.begin(),v.end(),
        //     [] (const auto &x, const auto &y) { return x.second < y.second; });

        // int max2 = v[n-1].second;

        //cout << max1 << "  " << max2 << "   ";

        cout << max1 * max2 <<"\n";

    }
}