#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n, m, k, ca=0, cb=0;
        cin>>n>>m>>k;
        cin.ignore(256, '\n');
        string r, s, c; 
        getline(cin, r);
        getline(cin, s);
        priority_queue<char, vector<char>, greater<char>> a(r.begin(), r.end()), b(s.begin(), s.end());
       
        while(!a.empty() && !b.empty()){
            if((a.top()<b.top() && ca<k) || (ca<k && cb>=k)){
                ca++, cb=0;
                c.push_back(a.top());
                a.pop();
            }else{
                cb++, ca=0;
                c.push_back(b.top());
                b.pop();
            }
        }

        cout<<c<<endl;
        
    }

}