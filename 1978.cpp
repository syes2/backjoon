#include <iostream>
using namespace std;

int	is_prime(int nb)
{
	int	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int i;
	int nb;
	int result = 0;
	
	cin >> i;
	while (i--)
	{
	    cin >> nb;
		if (is_prime(nb))
			result++;
	}
	cout << result;
}