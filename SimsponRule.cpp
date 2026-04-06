#include<iostream>
using namespace std;

double f(double x){
    return 1/(1+ x*x);
}

int main() {
    double a,b,h,sum=0,Ans;
    int n,i;
    cout<<"Enter the Lower and Upper Limit =";
    cin>>a>>b;
    cout<<"Enter the number of Sub-Intervals =";
    cin>>n;
    h=(b-a)/n;
    sum=f(a) + f(b);

    for(i=1;i<n;i++){
        if(i%2==0){
            sum+=2*f(a+ i*h);
        }
        else{
            sum+=4*f(a+i*h);
        }
    }
    Ans=(h/3)*sum;
    cout<<"Approximate Integral Value ="<<Ans<<endl;
    return 0;
}