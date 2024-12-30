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
    
    vector<vector<int>> A(n, vector<int>(n));
    vector<vector<int>> B(n, vector<int>(n));

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
            B[i][j] = A[i][j];  
        }
    }

 
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            A[i][j] = min(A[i][j], A[i-1][j-1]);
        }
    }


    for (int i = n-2; i >= 0; i--) {
        for (int j = n-2; j >= 0; j--) {
            B[i][j] = min(B[i][j], B[i+1][j+1]);
        }
    }

 
    long long a = 0;
    for (int i = 0; i < n-1; i++) {
        if (A[i][n-1] < 0) a += A[i][n-1];
        if (A[n-1][i] < 0) a += A[n-1][i];
    }
    if (A[n-1][n-1] < 0) a += A[n-1][n-1];

    long long b = 0;
    for (int i = 1; i < n; i++) {
        if (B[0][i] < 0) b += B[0][i];
        if (B[i][0] < 0) b += B[i][0];
    }
    if (B[0][0] < 0) b += B[0][0];

    cout << min(abs(a), abs(b)) << endl;

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