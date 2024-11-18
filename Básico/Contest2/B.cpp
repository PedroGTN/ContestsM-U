#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, ct=0;
    string s;

    cin>>l>>s;

    for(int i=0; i<l-1; i++)
        if(s[i] == s[i+1]) 
            ct++;
    
    cout<<ct<<endl;
}