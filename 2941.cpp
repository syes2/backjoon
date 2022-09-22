#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string alpha[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	string s;

	cin >> s;
	int result = s.length();
	for (int i = 0; i < 8; i++)
	{
	    for (int j = 0; j < result; j++)
	    {
		    if (s.find(alpha[i], j) != string::npos)
		    {
			    result--;
			    j = s.find(alpha[i], j);
		    }
	    }
	}
	cout << result;
}