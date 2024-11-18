#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int k, q, x; cin>>k>>q;
        vector<int> a(k);

        for(int i=0; i<k; i++) cin>>a[i];

        a.push_back(numeric_limits<int>::max());

        for(int i=0; i<q; i++){
            cin>>x;
            
            auto it = upper_bound(a.begin(), a.end(), x);

            while(it != a.begin()){
                x -= distance(a.begin(), it);
                it = upper_bound(a.begin(), a.end(), x);
            }
            cout<<x<<" ";
        }
        cout<<endl;
    }

}