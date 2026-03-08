#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    char c1,c2;
    cin>>c1>>c2;
    for(int i = 0;i<n;i++){
        if(s[i]==c1){
            s[i]=c2;
            
            
        }
    
        
    }
    cout<<s;
    
}
    
