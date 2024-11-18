#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    getchar();

    for(int i=1; i<=t; i++){

        int max=-1; 
        string s, s2; 
        istringstream iss;

        getline(cin, s);
        iss.str(s);
        
        while(getline(iss, s2, ' '))
            if(stoi(s2) > max) 
                max = stoi(s2);
        
        
        cout<<"Case "<<i<<": "<<max<<endl;
    }
}