#include<bits/stdc++.h>
using namespace std;
void fun(int ssf, int i,int n, int t, string ans)
{
	if (i == n)
	{
		if (ssf == t)
		{
			cout << ans << endl;
		}
		return;
	}
	fun(ssf+1, i + 1, n, t, ans + "I");
	fun(ssf, i + 1, n, t, ans + "_");
}
int main()
{
	int n, t;
	cin >> n >> t;
	fun(0,0, n, t, "");
}
