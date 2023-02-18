#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int mhash(string s) {
    int a = s.size(), b, d = 1;
    long long c=0;
    for (b = 0; b < a; b++) {
        c += (s.at(b) * d);
        d *= 31;
    }
    return (int)(c % 1234567891);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, string> m;
    vector<string> v;
    string s1;
    int a,b,c,d=0;
    cin >> a>>c;
    for (b = 0; b < a; b++) {
        cin >> s1;
        m.insert({ mhash(s1),s1 });
    }
    for (b = 0; b < c; b++) {
        cin >> s1;
        if (m.find(mhash(s1)) != m.end()) {
            v.push_back(s1);
            d++;
        }
    }
    sort(v.begin(),v.end());
    cout << d << "\n";
    for (b = 0; b < d; b++) {
        cout<<v.at(b)<<"\n";
    }
}