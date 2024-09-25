#include <iostream>

#include <cmath>

using namespace std;
void endl() {
  cout << endl;
}
int main() {

  double a, b, c;
  double x = 2.0;
  double sqrtResult;
  sqrtResult = sqrt(x);
  cout << sqrtResult << endl;

  cout << "Please enter value of a: ";
  cin >> a;
  endl();
  cout << "Please enter value of b: ";
  cin >> b;
  endl();
  cout << "Please enter value of c: ";
  cin >> c;
  endl();

  if (a == 0) {
    cout << "This equation has no real solutions";
  }

  double D = b * b - 4 * a * c;

  if (D > 0) {
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);
    cout << "There are two real solutions, x1=" << x1 << " and, x2= " << x2 << endl;
  } else if (D == 0) {
    double x = -b / (2 * a);
    cout << "There is one real solution x=" << x << endl;
  }

  return 0;
}