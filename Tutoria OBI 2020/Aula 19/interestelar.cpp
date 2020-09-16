#include<iostream>

using namespace std;

int n, c;

int main(){
	while (cin >> n >> c){
		if (n <= c){
			cout << n << endl;
		}
		else{
			int ans = c;
			for (int i = 2; i <= n-c+1; ++i){
				ans += i;
			}
			cout << ans << endl;
		}
	}
	return 0;
}