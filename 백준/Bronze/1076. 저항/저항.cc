#include<iostream>
#include<map>
using namespace std;
int main() {
    map<string, long long> m;
    long long arr[] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };
    m.insert({ "black", 0 });
    m.insert({ "brown", 1 });
    m.insert({ "red", 2 });
    m.insert({ "orange", 3 });
    m.insert({ "yellow", 4 });
    m.insert({ "green", 5 });
    m.insert({ "blue", 6 });
    m.insert({ "violet",7 });
    m.insert({ "grey", 8 });
    m.insert({ "white", 9 });
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    long long a=(m.find(s1)->second*10+m.find(s2)->second)*arr[m.find(s3)->second];
    cout << a;
}