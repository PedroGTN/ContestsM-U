#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    cin.ignore(256, '\n');
    int X = 0;
    
    while(t--){

        string s;

        getline(cin, s);

        if(s.find('+')!=string::npos)
            X++;
        else
            X--;
    }

    cout<<X<<endl;
    
    return 0;
}