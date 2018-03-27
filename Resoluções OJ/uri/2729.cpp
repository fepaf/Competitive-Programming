#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

set<string> lista;
int n;
string linha, word, ans;
stringstream ss;

int main(){_
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin, linha);
        for (ss << linha; ss >> word;){
            lista.insert(word);
        }
        ans = "";
        for (auto produto : lista){
            ans += " "+produto;
        }
        cout << ans.substr(1) << endl;
        ss.clear(); lista.clear();
    }
    return 0;
}
