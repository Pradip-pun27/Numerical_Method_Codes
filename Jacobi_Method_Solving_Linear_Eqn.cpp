#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,i,j;
    float sum,el,E[10],a[10][10],b[10],new_x[10],old_x[10];
    cout<<"Enter Dim. of a system of Linear Equation: ";
    cin>>n;
    cout<<"Enter the Coeff. Row-wise\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"Enter a["<<i+1<<"]["<<j+1<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter the R.H.S vector\n";
    for(i=0;i<n;i++){
        cout<<"Enter x["<<i+1<<"] = ";
        cin>>b[i];
    }

    cout<<"Enter the Accuracy Limit:";
    cin>>el;

    for(i=0;i<n;i++){
        old_x[i]=0;
    }

    while(1){
        for(i=0;i<n;i++){
            sum=b[i];
            for(j=0;j<n;j++){
                if(i!=j){
                    sum=sum-a[i][j]*old_x[j];
                }
            }
            new_x[i]=sum/a[i][i];
        }

        for(i=0;i<n;i++){
            E[i]=fabs(new_x[i] - old_x[i])/new_x[i];
            if(E[i]>el){
                break;
            }
        }

        if(i==n){
            cout<<"Solution are \n";
            for(i=0;i<n;i++){
                cout<<new_x[i]<<" ";
            }
            break;
        }
        else{
            for(i=0;i<n;i++){
                old_x[i]=new_x[i];
            }
        }
    }
      
    return 0;
}