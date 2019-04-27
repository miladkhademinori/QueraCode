#include <iostream>

using namespace std;

int main ()

{

	int n;
	int a[100000];
	int long long sum=0;
	int long long output;

	cin >> n;

	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}

	for (int i=0; i<n; i++)
	{
		sum += a[i];
		sum = sum%1000000007;
	}

	output = 1;

	for (int long long i=1; i<n; i++)
	{
		output *= 2;
		output = output%1000000007;
	}
	
	output = output*sum;
	output = output%1000000007;

	cout << output;
	return 0;
}

