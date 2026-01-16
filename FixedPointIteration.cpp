#include<iostream>
#include<cmath>
#define G(x) ((a3*pow(x,3) + a2*pow(x,2) + a0)/(-a1)) //Fx: a3*x^3 + a2*x^2 + a1*x + a0
float a0,a1,a2,a3;
using namespace std;
int main() {
    float x0,x1,E,Er;
    cout<<"Enter coeff. of a3,a2,a1 and a0:";
    cin>>a3>>a2>>a1>>a0;
    cout<<"Enter initial guess and E:";
    cin>>x0>>E;
    while(1){
        x1 = G(x0);
        Er= (x1-x0)/x1;
        if(fabs(Er) < E){
            cout<<"Root is "<<x1<<endl;
            break;
        }
        x0=x1;
    }
    return 0;
}