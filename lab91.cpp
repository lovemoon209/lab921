#include <iomanip>
#include <iostream>
#include <math.h>

#include "les.h"
#include "mes.h"
#include "sum.h"

using namespace std;

using namespace nsLes;
using namespace nsMes;
using namespace nsSum;

int main() {
  cout << "x_p = ";
  cin >> xp;
  cout << "x_k = ";
  cin >> xk;
  cout << "dx = ";
  cin >> dx;
  cout << "exp = ";
  cin >> eps;
  cout << endl;
  x = xp;
  cout << setw(10) << "x" << setw(23) << "S(x)" << setw(27) << "exp(x)"
       << setw(14) << "n" << endl;
  cout << string(75, '-') << endl;

  while (x <= xk) {
    nsMes::mes();
    nsSum::sum();
    cout << fixed << setprecision(12);
    cout << setw(15) << x << setw(25) << s << setw(25) << exp(x) << setw(10)
         << n << endl;
    x += dx;
  }

  cout << string(75, '-') << endl;

  cin.get();

  return 0;
}
