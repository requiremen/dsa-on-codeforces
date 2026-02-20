#include <iostream>
using namespace std;
 
int main() {
    int n, x;
    cin >> n;
    cin >> x;
 
    int arr[n];
 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    bool found = false;
 
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            found = true;
            break;
        }
    }
 
    if(found)
        cout << "yes";
    else
        cout << "no";
 
    return 0;
}
