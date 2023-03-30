#include <iostream>
using namespace std;

int main(){
float a, b, c;
float AreaTriangolo, AreaQuadrato, AreaRettangolo, AreaTrapezio;
cin >> a >> b >> c;
  AreaTriangolo= (a*b)/2;
  AreaQuadrato= a*a;
  AreaRettangolo= a*b;
  AreaTrapezio= ((b+a)*c)/2;
  cout<< AreaTriangolo<<endl;
  cout<< AreaQuadrato<<endl;
  cout<< AreaRettangolo<<endl;
  cout<< AreaTrapezio<<endl;
    return 0;
}
