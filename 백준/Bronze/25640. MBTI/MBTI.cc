#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a,b=0;
    char d[5],e[5];
    cin>>d>>a;
    while(a--){
        cin>>e;
        if(strcmp(d,e)==0)b++;
    }
    cout<<b;
}