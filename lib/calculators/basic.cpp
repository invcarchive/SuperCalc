#include <iostream>
using namespace std;
float calculatethingy(float a,char b,float c) {
  if(b=='+') {
    return a+c;
  }
  else if(b=='-') {
    return a-c;
  }
  else if(b=='*') {
    return a*c;
  }
  else if(b=='/') {
    return a/c;
  }
  else {
    cout << "no";
  };
};
void basiccalc() {
  // setup the varibles
  float usrnuminput;
  char operation;
  float cool;
  float awnser;
  // get user input
  cin >> usrnuminput;
  cout << endl << usrnuminput << endl;
  cin >> operation;
  cout << endl << usrnuminput << " " << operation << endl;
  cin >> cool;
  // calculate
  cout << endl << usrnuminput << " " << operation << " " << cool << " = ";
  float lol = calculatethingy(usrnuminput,operation,cool);
  cout << lol;
  cout << endl;   
};


