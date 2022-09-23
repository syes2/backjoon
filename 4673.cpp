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
    int num = 0;
    int self_number[10001] = {};
    for(int i = 1; num < 10001; i++)
    {
        num = i + check_scale(i);
        self_number[num] = 1;
    }
    for(int i = 1; i < 10001; i++)
    {
        if (self_number[i] == 0)
            cout << i << '\n';
    }
}