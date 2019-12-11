#include <iostream>
using namespace std;
int main ()
{
const int Numb = 12;
int i;
int a[10]={22,44,53,67,12,56,87,66,88,23};
int max = a[0];
int min = a[0];

  for (i = 0; i < 10; i++)
    {
      if (a[i] > max)
        {
          max = a[i];
        }
      else if (a[i] < min)
        {
          min = a[i];
        }
    }
  cout << max << endl;
  cout << min << endl;

  return 0;
