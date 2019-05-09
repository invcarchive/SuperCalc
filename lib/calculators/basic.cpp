#include <iostream>
using namespace std;
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
  cout << endl << usrnuminput << " " << operation << " " << cool << " = " << calculatethingy(usrnuminput,operation,cool) << endl;   
};

float calculatethingy(float a,char b,float c) {
  else if(b=='+') {
    return a+c
  }
  else if(b=='-') {
    return a-c
  }
  else if(b=='*') {
    return a*c
  }
  else if(b=='/') {
    return a/c
  }
  else {
    cout << "no";
  };
};
