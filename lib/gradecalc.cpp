#include <iostream>
#include <math.h>
#include <windows.h>
#include <iomanip>
using namespace std;
int grade() {
    setprecision(2);
    int questions;
    int incorrectcount;
    cout << "How many questions were there? ";
    cin >> questions;
    cout << endl << "How many questions out of the " << questions << " did you get wrong ";
    cin >> incorrectcount;
    cout << endl;
    if(questions<incorrectcount) {
        cout << "NANI";
        abort();
    }
    else if(questions==incorrectcount) {
        cout << "You already know you failed failure.";
        Sleep(100);
        abort();
    }
    else if(incorrectcount==0) {
        cout << "Why are you even here you got them all right";
    }
    else {
        float finalscore;
        cout << "Processing [";
        Sleep(100);
        finalscore = questions - incorrectcount;
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        Sleep(100);
        cout << "[]";
        finalscore = finalscore/questions;
        cout << "]";
        cout << endl << "You got " << incorrectcount << " out of " << questions << " wrong," << endl << (questions-incorrectcount) << " out of " << questions << " right," << endl << "And You\'r Final Score Was";
        Sleep(100);
        cout << "s";
        Sleep(100);
        cout << "s " << finalscore <<"%";
    };
}
