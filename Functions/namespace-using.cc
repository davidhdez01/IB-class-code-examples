/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 25 Jun 2020
 * @brief namespace example
 * Avoid using namespace <name>
 *
 * @see http://www.cplusplus.com/doc/tutorial/namespaces/
 */

#include <cmath>
#include <iostream>

using namespace std; // std namespace is used

// Self - defined function power shadows std::pow
double pow(double x, int exp) {
  double res = 1.0;
  for (int i = 0; i < exp; i++) { 
		res *= x; 
	}
	cout << "Our cool power function \n";
  return (res);
}

int main () {
  double x = 2.0;
  int power = 2;
  double res = pow(x, power);
	cout << x << " ^ " << power << " = " << res << endl;
  return 0;
}
