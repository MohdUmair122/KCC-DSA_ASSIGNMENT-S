
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,t,a,b,m,n,p=0,q=0;
    cin>>s>>t>>a>>b>>m>>n;
    int a1[m],a2[n];
    for(int i=0;i<m;i++)  cin>>a1[i];
    for(int i=0;i<n;i++)  cin>>a2[i];
    for(int i=0;i<m;i++){
        if((a1[i]+a)<=t && (a+a1[i])>=s) p++;
    }
    for(int i=0;i<n;i++){
        if((a2[i]+b)>=s && b+a2[i]<=t) q++;
    }
    cout<<p<<endl<<q;
    return 0;
}
