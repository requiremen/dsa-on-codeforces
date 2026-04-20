#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
     int q;
    cin >> q;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long p[n];
    long long sum = 0;

    for(int i = 0; i < n; i++){
        sum += 1LL * a[i] * a[i];  // safe multiplication
        p[i] = sum;
    }
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if(l == 0){
            cout << p[r] << endl;
        } else {
            cout << p[r] - p[l-1] << endl;
        }
    }
}
