#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	int i;
	int o=0;
	string a[100][2];
	cin >> n;
	for ( i = 0; i < n; i++)
	{
		cin >> a[i][0];
		cin >> a[i][1];
	
	}
	i = -1;
	while (a[++i]->size()!=0)
	{
		int len;
		len = a[i][0].size();
	
		for (int k = 0; k < a[i][1].length(); k++)
		{
			if (a[i][1].substr(k, len) == a[i][0])
				o++;
			
		}
		cout << o<<endl;
		o = 0;
	}
}

	
