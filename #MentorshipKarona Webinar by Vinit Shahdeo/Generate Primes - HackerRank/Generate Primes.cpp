#include <bits/stdc++.h>
using namespace std;

// Using Sieve of Eratosthenes
vector<int> constructSieve(int n){
    vector<bool> p(n+1,true);
    p[0]=p[1]=false;
    int till = sqrt(n);
    for(int i=2; i<=till; i++){
        if(p[i]){
            for(int j=i*2; j<=n; j=j+i){
                p[j]=false;
            }
        }
    }
    vector<int> prime; 
    for(int i=2; i<=n; i++){
        if(p[i])
            prime.push_back(i);
    }
    return prime;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int start,end;
        cin>>start>>end;
        vector<int> prime;
        prime = constructSieve(end);
        int size = prime.size();
        for(int i=0; i<size; i++){
            if(prime[i]>=start)
                cout<<prime[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
