#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;

    vector<int> arr(w);
    iota(arr.begin(), arr.end(), 1);

    n-=2*n;

    for(auto i : arr) 
        n+=k*i;
    
    cout<<n<<endl;
}