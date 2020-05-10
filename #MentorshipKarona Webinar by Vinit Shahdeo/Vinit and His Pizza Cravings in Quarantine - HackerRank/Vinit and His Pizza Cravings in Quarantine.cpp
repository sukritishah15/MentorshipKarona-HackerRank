#include <bits/stdc++.h>
using namespace std;

int countBin(int num){
    // c represents count of 1's in binary representation of num
    int c = 0;
    while(num>0){
        if(num % 2==1)
            c++;
        num = num/2;
    }
    return c;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *arr = new int[n];
        // for all the numbers given, 
        // the count of 1's in their binary representation is stored in vector c
        vector<int> c;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            int count = countBin(arr[i]);
            c.push_back(count);
        }
        // Sort the vector in descending order
        // and add the first k numbers in the vector to get the result
        sort(c.begin(), c.end(), greater<int>());
        int res = 0;
        for(int i=0; i<k; i++){
            res += c[i];
        }
        cout<<res<<endl;
    }
    return 0;
}
