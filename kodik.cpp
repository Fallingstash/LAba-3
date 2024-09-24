/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double T : {0, 15, 30, 45, 60, 120, 180, 240, 300}) {
    double t0 = 100 ;
    double tv = 20;
    double t = tv + (t0 - tv) * exp(-T/20);
    cout << "СПУСТЯ ВРЕМЯ  " << T << " МИНУТ ТЕМПЕРАТУРА ПЛИТЫ " << t << " ГРАДУСОВ ЦЕЛЬСИЯ" << endl;
}}