#include<iostream>
using namespace std;
int main() {
    int a[4],i,x,n,b[4];
    printf("Enter the value of x and n(degree of a polynomial): ");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++){
        cout<<"Enter the value of a["<<i<<"] : ";
        cin>>a[i];
    }
    //For Evaluating the given nth degree polynomial
    b[n] = a[n];
    while(n>0){
        b[n-1] = a[n-1] + (b[n]*x);
        n--;
    }
    cout<<"Evaluated ans: "<<b[0]<<endl;
    return 0;
}