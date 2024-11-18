#include <bits/stdc++.h>

#define max(a, b) (a<b)?b:a

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        set<int> con;
        vector<int> cont;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            con.insert(x);
        }
        for(int i : con){
            cont.push_back(i);
        }

        int att = 0, max_cunt = 1;

        for(int i=1; i<cont.size();){
            if(cont[i]- cont[att] < n){
                max_cunt = max((i-att)+1, max_cunt);
                i++;
            }
            else{
                att++;
                max_cunt = max((i-att)+1, max_cunt);
            }
        }
        

        
        cout<<max_cunt<<endl;
    }

}