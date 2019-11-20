#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

  float radius, circ, area;

  system("cls");
  cout << "=======================================" << endl;
  cout << "            Circle Calculator V0.1     " << endl;
  cout << "=======================================" << endl;
  cout << endl
       << endl;
  cout << "     Enter Circle Radius: ";
  cin >> radius;

  area = 3.14 * radius * radius;
  circ = 2 * 3.14 * radius;

  system("cls");
  cout << "=======================================" << endl;
  cout << "            Circle Calculator V0.1     " << endl;
  cout << "=======================================" << endl;
  cout << endl
       << endl;
  cout << "---------------Results------------------" << endl;
  cout << endl
       << endl;
  cout << "     AREA : " << area << endl;
  cout << "     CIR : " << circ << endl;
  cout << endl
       << endl;

  return 0;
}
