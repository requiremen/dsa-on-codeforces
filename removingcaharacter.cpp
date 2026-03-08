#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int n = s.size();
    for(int i = 0; i<n; i++){
        if(s[i]==c){
           s.erase(i,1);
           i--;
        }
    }
    cout<<s;
    
    
}
    
