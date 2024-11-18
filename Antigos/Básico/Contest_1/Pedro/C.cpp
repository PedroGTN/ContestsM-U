#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    string s;
    cin.ignore(256, '\n');
    getline(cin, s);
    auto last = unique(s.begin(), s.end());

    cout<<distance(last, s.end())<<endl;
}