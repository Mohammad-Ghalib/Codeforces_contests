#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;

    while(t--){
        vector<pair<double,double>> v;
        double a,b;

        for(int i=0; i<3; i++){
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }

        if( (v[0].second == v[1].second) && (v[0].second > 0)){ 
            if(v[2].second < v[0].second) cout<< fixed << setprecision(6) << abs(v[0].first - v[1].first) << "\n";
            else cout<< fixed << setprecision(6) << 0.000000 << "\n";
        }

        else if( (v[0].second == v[2].second) && (v[0].second > 0)){ 
            if(v[1].second < v[0].second) cout<< fixed << setprecision(6) << abs(v[0].first - v[2].first) << "\n";
            else cout<< fixed << setprecision(6) << 0.000000 << "\n";
        }

        else if( (v[2].second == v[1].second) && (v[2].second > 0)){ 
            if(v[0].second < v[1].second) cout<< fixed << setprecision(6) << abs(v[2].first - v[1].first) << "\n";
            else cout<< fixed << setprecision(6) << 0.000000 << "\n";
        }

        else cout<< fixed << setprecision(6) << 0.000000 << "\n";
    }
}