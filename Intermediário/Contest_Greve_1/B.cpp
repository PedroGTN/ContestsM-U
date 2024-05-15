#include <bits/stdc++.h>

using namespace std;

vector<bool> primes(1000000, false), notprime(1000000, false); 


void PinosPrime(){
    primes[2] = true;
    
    for(int i=3; i<1000000; i+=2){
        if(!notprime[i]) primes[i] = true;

        for(int j=i*3; j<1000000; j+=i*2) notprime[j] = true;
    }
}

void Solve(){
    int n, e; cin>>n>>e;

    vector<int> vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    uint64_t res=0, qtt_uns;
    vector<uint64_t> conjunto_uns;
    vector<bool> used(n, false);
    for(int i=0; i<n; i++){ 

        conjunto_uns.clear();

        if(!used[i]){
            qtt_uns = 0;
            for(int j=i; j<n; j+=e){

                if((!primes[vec[j]] && vec[j]!=1) || used[j]) 
                    break;

                used[j] = true;

                if(vec[j] == 1) 
                    qtt_uns++;
                else 
                    conjunto_uns.push_back(qtt_uns), qtt_uns=0;
            }
        }

        if(conjunto_uns.size() == 0) continue;
        conjunto_uns.push_back(qtt_uns);

        for(int i=0; i<conjunto_uns.size(); i++){
            res += conjunto_uns[i];

            if(i>0 && i<conjunto_uns.size()-1) res += conjunto_uns[i];
            
            if(i<conjunto_uns.size()-1) res += conjunto_uns[i] * conjunto_uns[i+1]; 
        }
    }

    cout<<res<<endl;
}

int main(){
    PinosPrime();

    int t; cin>>t;

    while(t--){
        Solve();
    }

}