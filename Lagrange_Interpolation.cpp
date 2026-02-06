#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    float x,l,Final_Ans=0, Ar_x[10], Ar_fx[10],L[10];
    cout<<"Enter the number of points : ";
    cin>>n;
    cout<<"Enter the value of x:";
    cin>>x;

    for(i=0;i<n;i++){
        cout<<"Enter the value of x and fx at position:["<<i<<"] : ";
        cin>>Ar_x[i]>>Ar_fx[i];
    }

    for(i=0;i<n;i++){
        l=1;
        for(j=0;j<n;j++){
            if(j!=i){
                l*= (x-Ar_x[j])/(Ar_x[i] - Ar_x[j]);
            }
        }
        L[i] = l;
    }

    for(i=0;i<n;i++){
        Final_Ans+=Ar_fx[i] * L[i];
    }
    cout<<"\nThe Interpolated value for "<<x<<" is "<<Final_Ans<<endl;
    return 0;
}