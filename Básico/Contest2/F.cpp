#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin>>t;
    getchar();

    while(t--){
        string a, b, c; 
        bool flag = true;

        getline(cin, a);
        getline(cin, b);
        getline(cin, c);

        for(int i=0; i<c.size(); i++) 
            if(a[i]!= c[i] && b[i] != c[i]) 
                flag = false;

        if(flag) 
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}