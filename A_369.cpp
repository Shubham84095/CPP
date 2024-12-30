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
    int A, B;
    cin >> A >> B;

    set<int> S;
    
    
    S.insert(2 * B - A);
    
    
    S.insert(2 * A - B);
    
    
    if ((A + B) % 2 == 0) {
        S.insert((A + B) / 2);
    }

    cout << S.size() << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}