#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, r;

    getline(cin, s);
    getline(cin, r);

    uint64_t sizer = r.size(), sizes = s.size(), ct=0;

    for(int i=1; i<=min(sizer,sizes); i++) {
        if(*(r.end()-i) == *(s.end()-i)) ct++;
        else break;
    }
    cout<<sizer+sizes-ct*2<<endl;
}