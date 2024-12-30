#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int x = min(a,b);
    int y = max(a,b);

    vector <int> same;
    vector <int> op;

    while(x >= 1 || y <= 12){
        if(x >= 1)
        same.push_back(x--);
        if(y <= 12)
        same.push_back(y++);
    }

    int count = 0;

    for(int i = 0; i <same.size(); i++){
        if(same[i] == c || same[i] == d){
            count++;
        }
    }

    if(count == 1){
        yes();
    }
    else {
        no();
    }
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