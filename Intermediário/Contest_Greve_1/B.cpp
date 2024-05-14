#include <bits/stdc++.h>

using namespace std;

vector<bool> primes(1000000, false), notprime(1000000, false); 


void PinosPrime(){
    primes[2] = true;
    
    for(int i=3; i<1000000; i+=2){
        if(!notprime[i]) primes[i] = true;

        for(int j=i+i; j<1000000; j+=i) notprime[j] = true;
    }
}

void Solve(){
    int n, e; cin>>n>>e;

    vector<int> vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    uint64_t res=0, um;
    vector<uint64_t> uns;
    vector<bool> used(n, false);
    for(int i=0; i<n; i++){ 
        uns.clear();
        if(!used[i]){
            um = 0;
            for(int j=i; j<n; j+=e){
                if((!primes[vec[j]] && vec[j]!=1) || used[j]) break;
                used[j] = true;

                if(vec[j] == 1) um++;
                else uns.push_back(um), um=0;
            }
        }

        if(!uns.size()) continue;
        uns.push_back(um);

        for(int i=0; i< uns.size(); i++){
            res += uns[i];

            if(i>0 && i<uns.size()-1) res += uns[i];
            
            if(i<uns.size()-1) res += uns[i] * uns[i+1]; 
        }
    }

    cout<<res<<endl;
}

int main(){
    int t; cin>>t;

    PinosPrime();

    while(t--){
        Solve();
    }

}