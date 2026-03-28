#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int i = 0;
    int j = 0;
    int sum = 0;
    while(i<n && j<n){
        sum = sum + arr[i][j];
        i++;
        j++;
    }
    cout<<sum;
}
