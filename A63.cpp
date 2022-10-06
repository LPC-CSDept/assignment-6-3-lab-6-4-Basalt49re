#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int getsum(int);

int main()
{
  int n,res;
  cout << "how many numbers?" << endl;
  cin >> n;

  res = getsum(n);
  cout << "the summation result is " << res;
  return 0;

}

int getsum(int numCount)
{
  int input,min,max;
  int sum = 0;
  for (int i=0;i<numCount;i++)
  {
    cout << "What is the " << (i+1) << "th input?" << endl;
    cin >> input;

    if (i == 0 || min > input){
        min = input;
    }
    if (i == 0 || max < input){
      max = input;
    }

    sum += input;

  }
  return (sum-min-max);


}