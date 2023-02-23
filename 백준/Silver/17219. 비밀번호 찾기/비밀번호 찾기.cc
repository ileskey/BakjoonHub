#include<iostream>
#include<map>
using namespace std;
int mHash(string s) {
    char c;
	long long sum = 0;
    int N=s.size(),M=1;
	for (int a = 0; a < N; a++) {
        c=s.at(a);
        if(c>='a'&&c<='z') sum+=((c-96)*M) ;//1 to 10
		else if(c>='A'&&c<='Z') sum += ((c - 54) * M); //11 to 20
        else sum+=((c-24)*M);
        M*=59;
	}
	return (int)(sum % 1234567891);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M,a;
    map<int, string> m;
    string s1,s2;
    cin>>N>>M;
    for(a=0;a<N;a++){
        cin>>s1>>s2;
        m.insert({mHash(s1),s2});
    }
    for(a=0;a<M;a++){
        cin>>s1;
        cout<< m.find(mHash(s1))->second << "\n";
    }
}