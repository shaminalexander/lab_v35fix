/******************************
* Автор: Шамин А.С.           *
* Задание: Расчет времени     *
* Вариант: 35                 *         
******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double d = 0.02;
  double n1 = 1.0;
  double n2 = 1.5;
  double c = 300000000.0;
  double pi = 3.1415926535;
  double v;
  double alpha[] = {0.0, 5.0, 10.0, 15.0, 20.0, 30.0, 40.0, 50.0, 60.0};
  double a;
  double beta;
  double time;

  v = c / n2;

  for (int alphaIndex = 0; alphaIndex < 9; ++alphaIndex) {
    a = alpha[alphaIndex] * pi / 180.0;
    beta = asin(n1 / n2 * sin(a));
    time = d / (v * cos(beta));
    beta = beta * 180.0 / pi;
    time = time * 1000000000.0;

    cout << alpha[alphaIndex] << "  "
         << beta << "  "
         << time << endl;
  }

  return 0;
}
