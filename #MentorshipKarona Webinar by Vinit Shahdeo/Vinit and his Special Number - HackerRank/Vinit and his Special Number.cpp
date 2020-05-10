#include <bits/stdc++.h>
using namespace std;

int checkAdj(int n){
    // s will hold the binary representation of n in reverse order
    string s;
    while(n){
        s += ((n&1)+'0');
        n = n>>1;
    }
    // if "11" is a substring of s then return 1, 
    // indicating that adjacent bits exist in the binary representation of n
    if(s.find("11")!=string::npos)
        return 1;
    return 0;
}

int main() {
    int n,q;
    cin>>n>>q;
    int *arr = new int[n];
    
    // vector v stores pairs,
    // where pairs hold the number (from arr) and 0/1
    // 0 indicates absence of adjacent bits in the representation of number
    // and 1 indicates presence of the same
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        int spcl = checkAdj(arr[i]);
        v.push_back({arr[i],spcl});
    }
    
    // We add the second value in the pair for all numbers 
    // within the range specified to get the result
    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int res = 0;
        for(int i=l; i<=r; i++){
            res += v[i].second;
        }
        cout<<res<<endl;
    }
    return 0;
}
