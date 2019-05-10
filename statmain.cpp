#include <windows.h>
#include <iostream>
#include "..\improvedvars\statlist.cpp"
using namespace std;
void statisticalcalc() {
    cout << "enter the init value ";
    int oof;
    cin >> oof;
    cout << endl;
    int input2;
    statlist stats(oof);
    while(1==1) {
        cout << "[1] Append" << endl << "[2] Show List" << endl << "[3] Get Medain" << endl << "[4] Get Mean" << endl;
        cout << "$ ";
        cin >> input2;
        if(input2==1) {
            int input3;
            cout << endl << "append: ";
            cin >> input3;
            cout << endl;
            stats.value.push_front(input3);
        }
        else if(input2==2) {
            stats.getlist();
        }
        else if(input2==3) {
            cout << stats.getmedain();
        }
        else if(input2==4) {
            cout << stats.getmean();
        }
        else if(input2==5) {
            cout << stats.getmode();
        }
        input2=NULL;
    };
}
