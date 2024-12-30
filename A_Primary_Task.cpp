#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    string s = to_string(n);

    int m = s.length();
    if(m <= 2){
        no();
        return;
    }
    for(int i = 0; i < 1; i++){
        if(s[i] == '1' && s[i+1] == '0'){
            string t = s.substr(i+2, m-i+1);
            int z = stoi(t);
            if(t.length() == 1 && z >= 2){
                yes();
                return;
            }
            else if(t.length() >= 2 && z >= 10){
                yes();
                return;
            }
        }

    }
    no();
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}