#include<iostream>
using namespace std;
int main() {
    int a[10],result,x,n,i;
    cout<<"Enter the Degree of a Polynomial and also the Value of X : ";
    cin>>n>>x;
    if (n >= 10) {
        cout << "Degree too high. Maximum supported is 9." << endl;
        return 1;
    }
    for(i=n;i>=0;i--){
        printf("Enter the value of a[%d]:",i);
        scanf("%d",&a[i]);
    }

    // Horner's method for polynomial evaluation
    result = a[n];   // Start with highest coefficient
    for(i=n-1;i>=0;i--){
        result=a[i] + result*x;
    }
    cout<<"The Answer is "<<result<<endl;
    return 0;
}