#include<iostream>
using namespace std;
int main(){
    string s;
    int a, b;
    while(1){
        cin >> s;
        if(s == "#") break;
        cin >> a >> b;
        if(a > 17 || b >= 80) cout << s << " Senior\n";
        else cout << s << " Junior\n";
    }
}