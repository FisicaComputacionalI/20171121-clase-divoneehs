#include <iostream>
#include <cmath>
using namespace std;
int main(){
cout << "Introduce un ángulo para calcular el coseno :";
double angulo;
cin >> angulo;
double coseno = cos(angulo);
cout << "El coseno es " << coseno << endl;
return 0;
}
