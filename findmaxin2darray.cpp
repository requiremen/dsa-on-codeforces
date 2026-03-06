#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i =0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ans = arr[0][0];
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(ans<arr[i][j]){
                ans=arr[i][j];
            }
            
        }
    }
    cout<<ans;
}
