#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b;
    cin>>a>>b;

    while(a>=0 && b>=0){

        if(abs(a-b)>50)
            cout<<100-abs(a-b)<<endl;
        else
            cout<<abs(a-b)<<endl;

        cin>>a>>b;
    }
}