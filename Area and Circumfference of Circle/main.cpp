#include<iostream>
#include<cmath>
using namespace std;
int main(){
    const double PI = 3.14;
    float A ; float C ; float r;
    cout << "Enter radius of CIRCLE: ";
    cin >> r; cout << endl; 
    A = PI * pow(r, 2); C = 2 * PI * r;
    cout << " Circumference = " << C << endl; 
    cout << " Area = " << A; 
    return 0;
}