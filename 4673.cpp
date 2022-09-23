#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int check_scale(int n)
{
    int i = 0;
    int sum = 0;
    int num = n;
    while (num > 0)
    {
        num /= 10;
        i++;
    }
    while (i-- > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return (sum);
}

int main()
{ 
    int self_number[10001] = {};
    for(int i = 1; i + check_scale(i) < 10001; i++)
        self_number[i + check_scale(i)] = 1;
    for(int i = 1; i < 9994; i++)
    {
        if (self_number[i] == 0)
            cout << i << '\n';
    }
}
