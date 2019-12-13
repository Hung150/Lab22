#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	bool kt = false;
	while (cin >> s) {
		if (kt) cout << s << " ";
		kt = true;
	}
	return 0;
}
