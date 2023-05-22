#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll add(ll a, ll b, ll c) {
	return (a + b) % c;
}
ll mul(ll a, ll b, ll mod) {
	ll q = ll((long double)a * (long double)b / (long double)mod);
	ll r = (a * b - mod * q) % mod;
	if(r < 0) r += mod;
	return r;
}
ll fexp(ll b, ll e, ll mod) {
	ll ans = 1;
	while(e) {
		if(e & 1) ans = mul(ans, b, mod);
		b = mul(b, b, mod);
		e /= 2;
	}
	return ans;
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll llrand(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(rng);
}

ll rho(ll n){
	if(n % 2 == 0) return 2;
	ll d, c, x, y, prod;
	do{
		c = llrand(1, n - 1);
		x = llrand(1, n - 1);
		y = x;
		prod = 1;
		for(int i = 0; i < 40; i++) {
			x = add(mul(x, x, n), c, n);
			y = add(mul(y, y, n), c, n);
			y = add(mul(y, y, n), c, n);
			prod = mul(prod, abs(x - y), n) ?: prod;
		}
		d = __gcd(prod, n);
	} while(d == 1);
	return d;
}

ll pollard_rho(ll n){
	ll x, c, y, d, k;
	int i;
	do{
		i = 1;
		x = llrand(1, n-1), c = llrand(1, n-1);
		y = x, k = 4;
		do{
			if(++i == k) y = x, k *= 2;
			x = add(mul(x, x, n), c, n);
			d = __gcd(abs(x - y), n);
		}while(d == 1);
	}while(d == n);
	return d;
}
bool rabin(ll n){
	if(n <= 1) return 0;
	if(n <= 3) return 1;
	ll s = 0, d = n - 1;
	while(d % 2 == 0) d /= 2, s++;
	for(int k = 0; k < 64; k++){
		ll a = llrand(2, n-2);
		ll x = fexp(a, d, n);
		if(x != 1 && x != n-1){
			for(int r = 1; r < s; r++){
				x = mul(x, x, n);
				if(x == 1) return 0;
				if(x == n-1) break;
			}
			if(x != n-1) return 0;
		}
	}
	return 1;
}

void factorize(ll val, map<ll, int> &fac){
	if(rabin(val)) fac[ val ]++;
	else{
		ll d = pollard_rho(val);
		factorize(d, fac);
		factorize(val / d, fac);
	}
}
map<ll, int> factor(ll val){
	map<ll, int> fac;
	if(val > 1) factorize(val, fac);
	return fac;
}
ll tot(ll n) {
	auto factors = factor(n);
	ll ans = n;
	for(auto [prime, exponent] : factors) {
		ans = ans / prime * (prime - 1);
	}
	return ans;
}

int main() {
	ll n;
	scanf("%lld", &n);

	printf("%lld\n", fexp(10, tot(n) - 1, n));
}
