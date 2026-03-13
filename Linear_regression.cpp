#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,i;
    float a=0,b=0,x[10],y[10],sx=0,sy=0,sxy=0,sx2=0;
    cout<<"Enter the number of points:";
    cin>>n;
    cout<<"Enter the value of xs \n";
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cout<<"Enter the value of fxs \n";
    for(i=0;i<n;i++){
        cin>>y[i];
    }

    for(i=0;i<n;i++){
        sx=sx+x[i];
        sy=sy+y[i];
        sxy=sxy+(x[i]*y[i]);
        sx2=sx2+(x[i]*x[i]);
    }
    
    b=((n*sxy) - (sx*sy)) / (n*sx2 - (sx*sx));
    a=(sy/n) -(b*sx/n);
    cout<<"Fitted line is : "<<a<< " + " << b<<"x"<<endl;
    return 0;
}