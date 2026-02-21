#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int c0 = 0, c1 = 0;
        int n;
        cin >> n;
 
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0)
                c0++;
            else
                c1++;
        }
 
        for(int i = 0; i < c0; i++)
            cout << 0 << " ";
 
        for(int i = 0; i < c1; i++)
            cout << 1 << " ";
 
        cout << endl;
    }
 
    return 0;
}
