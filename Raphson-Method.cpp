#include<iostream>
#include<cmath>
#define F(x) (a3*x*x*x + a2*x*x + a1*x + a0)
#define Df(x) (3*a3*x*x + 2*a2*x + a1)
float a0,a1,a2,a3;
using namespace std;
int main() {
    float x0,x1,fx0,dfx0, E,Er;
    int i=0;
    cout<<"Enter the coefficients a3, a2, a1 and a0 : ";
    cin>>a3>>a2>>a1>>a0;
    cout<<"Enter the initial guess and the Error Tolerance(E) : ";
    cin>>x0>>E;
    while(1){
        i++;
        fx0 = F(x0);
        dfx0 = Df(x0);
        x1 = x0 -(fx0/dfx0);
        Er= (x1-x0)/x1;
        if(fabs(Er)< E){
            cout<<"The root is "<<x1<<endl;
            break;
            }
        x0=x1;
        if(i==50){
            break;
        }
    }
    return 0;
}