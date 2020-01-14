/*
    create an integer variable for x
    create an integer variable for y
    create an integer variable for sum

    ask the user "X: " and put answer in x
    ask the user "Y: " and put answer in y
    put x + y in sum
    tell user "answer is " sum
*/



#include <iostream>

using namespace std;


int main ()
{
  int x;
  int y;
  int sum;

  // Declare x
  cout << "X: " << endl;
  cin >> x;

  // Declare y
  cout << "Y: " << endl;
  cin >> y;

  sum = x + y;

  cout << " Answer is " << sum << endl;

  return 0;
}
