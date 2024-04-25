#include <bits/stdc++.h>

using namespace std;

int main(){
    uint64_t k, w;
    int64_t n;
    cin>>k>>n>>w;

    vector<uint64_t> arr(w);
    iota(arr.begin(), arr.end(), 1);

    n-=2*n;

    for(auto i : arr){
        n+=k*i;
    }

    cout<<(n<0?0:n)<<endl;
}