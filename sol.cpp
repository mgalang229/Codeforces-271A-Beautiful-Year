#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int y;
	cin >> y;
	int a[100], t = y;
	bool ok = false;
	int nt = t;
	while(ok == false){
		int cnt = 0;
		while(y != 0){
			a[cnt] = y%10;
			y /= 10;
			cnt++;
		}
		int cnt2 = 0;
		sort(a, a+cnt);
		for(int i = 0; i < cnt; i++){
			if(a[i] != a[i+1]){
				cnt2++;
			}
		}
		if(cnt2 == cnt && t != nt){
			ok = true;
		} else{
			t += 1;
			y = t;
		}
	}
	cout << t << "\n";
	return 0;
}
