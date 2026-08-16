#include <iostream>
using namespace std;
void primeFactors(int n)
{
    if (n <= 1)
    {
      return;
    }
    for (int i = 2; i <= n; i++)
    {
      while (n % i == 0)
      {
        cout << i << " ";
        n = n / i;
      }
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;
    cout << "The Prime Factors of " << n << " are: ";
    primeFactors(n);
    return 0;
}