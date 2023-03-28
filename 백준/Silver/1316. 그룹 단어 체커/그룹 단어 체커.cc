#include<iostream>
using namespace std;
int run(){
    int c, d;
    string s;
    cin >> s;
    c = s.size();
    int arr[26]{};
    arr[s.at(0) - 'a']++;
    for(d = 1; d < c; d++){
        if(s.at(d) == s.at(d - 1)) continue;
        if(arr[s.at(d) - 'a']) return 0;
        else arr[s.at(d) - 'a'] = 1;
    }
    return 1;
}
int main(){
    int N, a, b = 0;
    cin >> N;
    for(a = 0; a < N; a++){
        if(run()) b++;
    }
    cout << b;
}