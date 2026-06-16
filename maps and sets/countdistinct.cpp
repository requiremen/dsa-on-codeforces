#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    set<int>s;
    int count = 0;
    for(int i = 0;i<n;i++){
        s.insert(arr[i]);
        count++;
    }
    cout<<s.size();
    
}
