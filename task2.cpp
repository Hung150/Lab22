//Problem Bai_cua_thang_Hung
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n,k;
	s = s + ".txt";
	cin >> n >> k;
	freopen(s.c_str(),"w+",stdout);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=k;j++) cout << "*";
		cout << endl;
	}
	return 0;
}
