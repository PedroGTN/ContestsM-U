#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    cin>>l;

    vector<int> arr(l);

    for(int i=0; i<l; i++) 
        cin>>arr[i];

    sort(arr.begin(), arr.end());

    l--;
    
    cout<<arr[(l/2)]<<endl;
    
}