#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        uint64_t n; cin>>n;
        vector<uint64_t> heap;
        uint64_t x, res=0;
        while(n--){
            cin>>x;
            if(x){
                heap.push_back(x);
                push_heap(heap.begin(),heap.end());
            }else if(!heap.empty()){
                res += heap.front();
                pop_heap(heap.begin(),heap.end());
                heap.pop_back();
            }
        }
        cout<<res<<endl;
    }

}
