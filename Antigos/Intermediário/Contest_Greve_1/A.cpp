#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        uint64_t n, count=0;
        int64_t minus=0;
        cin>>n;
        vector<int64_t> vec(n);

        for(uint64_t i=0; i<n; i++){
            cin>>vec[i];
            count+=vec[i];
        } 

        count/=n;

        for(int i=n-1; i>=0; i--){
            if(vec[i]>count){
                minus += vec[i]-count;
                if(minus>0)
                    break;
            }else{
                minus += vec[i]-count;
            }
        }
        if(minus==0) cout<<"YES";
        else cout<<"NO";

        cout<<endl;
        
    }

}

