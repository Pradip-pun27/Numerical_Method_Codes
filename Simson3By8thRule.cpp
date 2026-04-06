#include<iostream>
using namespace std;
#define F(x) (1/(1+x*x))
int main() {
    double h,Integral,sum,l,u;
    int i,n,co=1;
    cout<<"Enter the value of lower and upper: ";
    cin>>l>>u;
    cout<<"Enter the value of Number of Sub-Intervals (must be divisible by 3): ";
    cin>>n;
    
    if(n % 3 != 0) {
        cout<<"Error: n must be divisible by 3!"<<endl;
        return 1;
    }
    
    h=(u-l)/n;
    sum = F(l) + F(u);

    for(i=1; i<n; i++) {
        if(co<=2){
            sum+=3*F(l + i*h);
            co++;
        }
        else{
            sum+=2*F(l + i*h);
            co=1;
        }
    }
    
    Integral = (3 * h * sum) / 8;
    cout<<"The Final Answer is: "<<Integral<<endl;
    return 0;
}