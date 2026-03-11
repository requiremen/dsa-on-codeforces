#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(char x : s){
        if(x>='A' && x<='Z'){
            x+=32;
        }else{
            x-=32;
        }
        cout<<x;
    }
   
}
