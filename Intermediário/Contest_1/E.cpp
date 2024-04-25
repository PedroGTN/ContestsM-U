#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        cin.ignore(256, '\n');

        unsigned long x = 0;
        string s;
        getline(cin, s);
        
        for(auto i : s)
            x |= 1<<(i - 'A');

        cout<<n + bitset<32>(x).count()<<endl;
    }

}