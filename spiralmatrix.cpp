#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int startrow = 0;
    int endrow = n-1;
    int startcolumn = 0;
    int endcolumn = m-1;
    while(startrow<=endrow && startcolumn<=endcolumn){
         for(int j = 0;j<m;j++){
        cout<<arr[startrow][j]<<" ";
    }
    for(int i = 1;i<n;i++){
        cout<<arr[i][endcolumn]<<" ";
    }
    for(int j = m-2;j>=0;j--){
        cout<<arr[endrow][j]<<" ";
        
    }
    for(int i = n-2;i>0;i--){
        cout<<arr[i][startcolumn]<<" ";
    }
    startrow++;
    endrow--;
    startcolumn++;
    endcolumn--;
        
    }
}
