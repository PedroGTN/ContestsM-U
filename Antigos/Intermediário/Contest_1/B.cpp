#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<long long> vec(2*n);
        for(int i=0; i<vec.size(); i++) cin>>vec[i];

        sort(vec.begin(), vec.end());

        cout<<abs((vec[n]-vec[n-1]))<<endl;
    }

}