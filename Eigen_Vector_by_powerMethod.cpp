#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,i,j;
    float el,k,E[10],a[10][10],nx[10],x[10],y[10]; //el: Error Limit and nx: new_x_values
    cout<<"Enter the Dim. of System of Linear Equation: ";
    cin>>n;
    cout<<"Enter the Coefficients row-wise\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"Enter a["<<i+1<<"]["<<j+1<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter the Guess Vector\n";
    for(i=0;i<n;i++){
        cout<<"Enter x["<<i+1<<"] = ";
        cin>>x[i];
    }

    cout<<"Enter the Accuracy limit : ";
    cin>>el;

    while(1){
        for(i=0;i<n;i++){
            y[i]=a[i][0]*x[0] + a[i][1]*x[1] + a[i][2]*x[2];
        }
        k=y[0];
        for(i=0;i<n;i++){
            if(k<y[i]){
                k=y[i];
            }
        }
        for(i=0;i<n;i++){
            nx[i]=(1/k)*y[i];
        }
        for(i=0;i<n;i++){
            E[i]=(nx[i] - x[i])/nx[i];
            if(E[i]>el){
                break;
            }
        }

        if(i==n){
            cout<<"Largest Eigen_Value is "<<k<<endl;
            cout<<"Eigen Vector is "<<endl;
            for(i=0;i<n;i++){
                cout<<nx[i]<<" ";
            }
            break;
        }
        else{
            for(i=0;i<n;i++){
                x[i]=nx[i];
            }
        }
    }
    return 0;
}