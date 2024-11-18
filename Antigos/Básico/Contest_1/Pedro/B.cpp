#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, t=0;

    cin>>a>>b;

    while(a<=b){
        t++;
        a*=3;
        b*=2;
    }

    cout<<t<<endl;

}