#include<iostream>
using namespace std;
#define F(x) (1/(1+x*x))
int main() {
    double h,Integral,sum,a,b;
    int i,n;
    cout<<"Enter the value of lower and upper: ";
    cin>>a>>b;
    cout<<"Enter the value of Number of Sub-Intervals (must be divisible by 3): ";
    cin>>n;
    
    if(n % 3 != 0) {
        cout<<"Error: n must be divisible by 3!"<<endl;
        return 1;
    }
    
    h=(b-a)/n;
    sum = F(a) + F(b);

    for(i=1; i<n; i++) {
        if(i%3==0){
            sum+=2*F(a + i*h);
        }
        else{
            sum+=3*F(a + i*h);
        }
    }
    
    Integral = (3 * h * sum) / 8;
    cout<<"The Final Answer is: "<<Integral<<endl;
    return 0;
}