#include <bits/stdc++.h>

using namespace std;

int main(){
    int lock[4];
    for(int i=0; i<4; i++) cin>>lock[i];
    while(lock[0] || lock[1] || lock[2] || lock[3]){
        int res = 1080;

        if(lock[0]>lock[1])
            res += ((lock[0]-lock[1])*9);
        else
            res += 360 -((lock[1]-lock[0])*9);
        
        if(lock[1]<lock[2])
            res += ((lock[2]-lock[1])*9);
        else
            res += 360 - ((lock[1]-lock[2])*9);

        if(lock[2]>lock[3])
            res += ((lock[2]-lock[3])*9);
        else
            res += 360 - ((lock[3]-lock[2])*9);

        cout<<res<<endl;
        for(int i=0; i<4; i++) cin>>lock[i];
    }
}