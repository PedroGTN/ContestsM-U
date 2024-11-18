#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, b, h, w;
    while(cin>>n>>b>>h>>w){

        int price = -1;
        while(h--){
            int cost;
            bool budget = false, beds = false;
            cin>>cost;

            if(cost*n < b)  
                budget = true;

            for(int i=0; i<w; i++){
                int x;
                cin>>x;
                if(x>=n) 
                    beds = true;
            }

            if(beds && budget && (cost*n < price || price==-1))
                price = cost*n;

        }
        
        if(price>=0)
            cout<<price<<endl;
        else
            cout<<"stay home\n";
    }
}