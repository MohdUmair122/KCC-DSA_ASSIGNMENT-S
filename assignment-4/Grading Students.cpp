#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,s;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]<38) cout<<arr[i];
        else if(arr[i]%5 != 0  ){
            s=arr[i] + ((5-(arr[i] % 5)) % 5);
            if(s-arr[i]<3) cout<<s; 
            else if(s-arr[i]>=3) cout<<arr[i];
        }
        else if (arr[i]%5 == 0  ) cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
