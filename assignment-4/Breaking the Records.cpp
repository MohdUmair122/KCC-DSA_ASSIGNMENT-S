#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0,p=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //for maximum score
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max) {
            max = arr[i];
            m++;
        }
        else if(arr[i] < min){
            min = arr[i];
            p++;
        }
        else continue;
    }
    cout<<m<<" "<<p;
    
    return 0;
}

