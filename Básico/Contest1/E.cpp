#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, res=0;
    cin>>t;
    t--;
    char c, last;
    cin>>c;
    last = c;

    while(t--){
        cin>>c;
        if(c == last) res++;
        last = c;
    }


    cout<<res<<endl;
}