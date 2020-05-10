#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int size = 2*n+1;
    int *arr = new int[size];
    
    // We map every element with it's frequency
    map<int,int> mp;
    for(int i=0; i<size; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    
    // If frequency of an element is odd, print it
    for(auto x:mp){
        if(x.second%2==1){
            cout<<x.first<<endl;
            break;
        }
    }
    return 0;
}
