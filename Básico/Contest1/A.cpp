#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, years = 0;
    cin>>a>>b;

    do{
        years++,
        a*=3, b*=2;
    }while(a<=b);

    cout<<years<<endl;
}