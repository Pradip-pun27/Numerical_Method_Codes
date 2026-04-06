#include<iostream>
#include<cmath>
#define f(x) 3*pow(x,2)+(2*x)-5 
using namespace std;
int main() {
    float a,h,x0,xn,fx0,fxn,term,v; //v=value
    int i,k;
    cout<<"Enter the Lower and Upper Limit:";
    cin>>x0>>xn;
    cout<<"Enter the number of segments also : ";
    cin>>k;
    h=(xn-x0)/k;
    fx0=f(x0);
    fxn=f(xn);
    term=fx0+fxn;
    for(i=1;i<k;i++){
        a=x0+(i*h);
        term=term+2*(f(a));
    }
    v=h/2*term;
    cout<<"Value of Integration= "<<v<<endl;
    return 0;
}