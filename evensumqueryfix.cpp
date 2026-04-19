//using long long method tp fix things
#include <iostream>
using namespace std;

int main(){
    long long  n;
    cin>>n;

    long long a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    long long p[n];
    long long sum = 0;

    for(int i = 0;i<n;i++){
        if((i+1)%2==0){
            sum += a[i];
        }
        p[i] = sum;
    }

    long long q;
    cin >> q;  

    for(int i = 0;i<q;i++){
        int l,r;
        cin>>l>>r;

        l--;
        r--;

        if(l==0){
            cout<<p[r]<<endl;
        }else{
            cout<<p[r]-p[l-1]<<endl;
        }
    }
}
