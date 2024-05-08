#include <bits/stdc++.h>

#define max(a, b) (a<b)?b:a


using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int> vec(n);
        set<int> sla;

        for(int i=0; i<n; i++) {
            cin>>vec[i];
            sla.insert(vec[i]);
        }
        map<int,int> mapa;



        for(int i=0; i<n; i++){
            if(vec[i] != vec[0])break;
            else mapa[vec.front()]++;
        }

        for(int i=n-1; i>=0; i--){
            if(vec[i] != vec[n-1])break;
            else mapa[vec.back()]++;
        }

        int big = max(mapa[vec.front()], mapa[vec.back()]);
        if(sla.size() == 1) cout<<0<<endl;
        else cout<<(n-big)<<endl;
    }

}