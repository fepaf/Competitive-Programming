#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<i64>
#define pb push_back
#define i64 long long


using namespace std;

i64 dp[60][2];
i64 d,h,b;
vi dig;
string c;

vi getDigit(i64 x){
    vi digitos;

    do{
        digitos.pb(x%b);
        x/=b;
    }while(x);

    return digitos;
}

i64 toral(i64 x){
    i64 a = 0LL;
    for (i64 i=x+1; i--;){
        int check = 1;
        vi digitos = getDigit(i);
        for (auto ch : digitos){
            check &= (c[ch]=='S');
        }
        a += check;
    }
    return a;
}

i64 solve(int t, int idx, int restrito){
    if (idx==-1) return 1;

    if (~dp[idx][restrito]) return dp[idx][restrito];

    int limit = (restrito ? dig[idx] : (b-1));

    i64 ans = 0LL;

    for (int i=(idx==t); i<=limit; i++){
        if (c[i]=='N') continue;
        ans += solve(t,idx-1,(i < dig[idx] ? 0 : restrito));
    }
    return dp[idx][restrito] = ans;
}

i64 f(i64 x){
    i64 ans = 0;

    dig = getDigit(x);

    for (int t=dig.size();t--;){
        memset(dp,-1,sizeof(dp));
        ans += solve(t,t,(t==dig.size()-1));
    }

    return ans;
}

int main(){_
    while ((cin>>d>>h>>b>>c)&&(~d && ~h && ~b && c[0]!='*')){
        cout<<(f(h)-f(d-1))<<endl;
    }
}
