// Language: C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    int mx = 0;
    for (int i = 1; i < N; i++)
    {
        mx = max(mx, S[i]);
    }
    cout << max(mx - S[0] + 1, 0) << endl;
}
