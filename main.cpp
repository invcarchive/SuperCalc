#include "lib\calculators\basic.cpp"
#include "lib\calculators\gradecalc.cpp"
int main() {
  int a;
  cout << "[1] Basic Calculator" << endl << "[2] Grade Calculator" << endl;
  cin >> a;
  if(a==1) {
    basiccalc();
  }
  else if(a==2) {
    grade();
  };
};
