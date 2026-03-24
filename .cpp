#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    int l = 0;
    int x = n-1;
    int target;
    cin>>target;
    bool flag = false;
    while(l<=x){
        int mid = (l+x)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<"YES";
            break;
            
        }
        else if(arr[mid]<target){
            l = mid + 1;
            
        }
        else{
            x = mid-1;
        }
        
    }
    if(flag == false){
        cout<<"N0";
    }
}
