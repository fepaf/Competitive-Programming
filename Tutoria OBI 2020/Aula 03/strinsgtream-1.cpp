#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

string linha, palavra;
int n;
stringstream ss;

int main(){_
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin, linha);
        ss << linha;
        while (ss >> palavra){
            cout << "word :" << palavra << endl;
        }
        ss.clear();
    }

    return 0;
}
