#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    string result ="";
    for(char x : s){
        if(x!=c){
            result+=x;
        }
    }
    cout<<result;
}
//isme charachter get remove with less time complexity
