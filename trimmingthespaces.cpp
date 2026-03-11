#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string result = "";
    char c = ' ';
    for(char x : s){
        if(x!=c)
        result+=x;
    }
    cout<<result;
}

