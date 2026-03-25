// using 2 pointers
//i/p - aaabbccdd
//o/p - a3b2c2d2
//using 2 pointers method
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int i = 0;//pointer 1
    while(i<n){
        int j = i;//pointer 2
        int count = 0;
        while(j<n&&s[i]==s[j]){
            count++;
            j++;
        }
        cout<<s[i]<<count;
        i=j;
       
    }
   
}
