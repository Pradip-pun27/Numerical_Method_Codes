#include<iostream>
#include<cmath>
#define F(x) (a3*pow(x,3)+ a2*pow(x,2) +a1*x +a0)
float a0,a1,a2,a3;
using namespace std;
int main() {
    float x0,x1,x2, fx0,fx1, E,Er;
    cout<<"Enter the coeff. a3, a2 ,a1 and a0: ";
    cin>>a3>>a2>>a1>>a0;
    cout<<"Enter 2 initial guesseses and E : ";
    cin>>x0>>x1>>E;

    while(1){
        fx0=F(x0), fx1=F(x1);
        x2 = (fx1*(x0) - fx0*(x1))/(fx1 - fx0);
        Er=(x2-x1)/x2;
        if(fabs(Er)<E){
            cout<<"Root is "<<x2;
            break;
        }
        x0=x1;
        x1=x2;
    }
    return 0;
}