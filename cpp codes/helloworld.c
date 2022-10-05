##include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<string,int> m;
        int n,sum=0;
        cin>>n;
        string s;
        cin>>s;
        
        for(char value:m){
            m[value]++;
            if(m[value]>0)
            sum=m[value]+1;
            else
            sum+=m[value];}
    }
return 0;
}