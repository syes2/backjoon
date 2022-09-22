#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string word;
	int result = 0;
	int i;

	cin >> i;
	while (i--)
	{
	    bool groupword = true;
	    int num[26] = {};
		cin >> word;
		for (int j = 0; j < word.length(); j++)
		{
			if (num[word[j] - 'a'] == 1 && word[j - 1] != word[j])
				groupword = false;
			num[word[j] - 'a'] = 1;
		}
		if (groupword)
			result++;
	}
	cout << result;
}