#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        // mp holds name of the friend and mutual friends 
        // It will also contain the final friends list for Sherry
        map<string,int> mp;
        
        string name;
        int mutualFriends;
        
        int flag = 0;
        
        for(int i=0; i<n; i++){
            cin>>name>>mutualFriends;
            
            // if mutual friends are less than k, do not add it to the map mp (equivalent to removal)
            // if a friend with same name and lesser no. of friends exist in mp, 
            // update mp (equivalent to removal of previous friend with same name)
            // else insert in mp
            if(mutualFriends < k){
                flag++;
                continue;
            }
            else if(mp.find(name)!=mp.end()){
                int temp = mp[name];
                if(temp<mutualFriends){
                    flag++;
                    mp[name] = mutualFriends;
                }
            }
            else{
                mp[name] = mutualFriends;
            }
        }
        
        // if friends have not been removed print "Sorry Winit!"
        // else print new friends list lexicographically
        if(!flag){
            cout<<"Sorry Winit!"<<endl;
        }
        else{
            for(auto x : mp){
                cout<<x.first<<" "<<x.second<<endl;
            }   
        }
    }
    return 0;
}
