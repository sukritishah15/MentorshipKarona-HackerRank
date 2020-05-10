#include <bits/stdc++.h>
using namespace std;

int main() {
    int shreya[7], vinit[7];
    for(int i=0; i<7; i++)
        cin>>shreya[i];
    for(int i=0; i<7; i++)
        cin>>vinit[i];
    
    int q;
    cin>>q;
    
    // Days are mapped with integers from 0 to 6
    map<string,int> mp;
    for(int i=0; i<7; i++){
        mp["Sunday"]=0;
        mp["Monday"]=1;
        mp["Tuesday"]=2;
        mp["Wednesday"]=3;
        mp["Thursday"]=4;
        mp["Friday"]=5;
        mp["Saturday"]=6;
    }
    
    // Panipuri count for Shreya and Vinit on a particular day is compared
    // and the one who ate less is printed
    for(int i=0; i<q; i++){
        string s;
        cin>>s;
        if(shreya[mp[s]]>vinit[mp[s]])
            cout<<"Vinit";
        else
            cout<<"Shreya";
        cout<<endl;
    }
    
    return 0;
}
