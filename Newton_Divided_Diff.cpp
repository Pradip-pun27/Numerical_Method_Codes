#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

   double a[10][10], x[10],y[10];
    cout << "Enter x and y values:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        a[0][i] = y[i]; // 0th order difference is just the y value
    }


    // Generating the Divided Difference Table
    //a[i][j] = (a[i-1][j+1] - a[i-1][j]) / (x[j+i] - x[j])
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            a[i][j] = (a[i - 1][j + 1] - a[i - 1][j]) / (x[j + i] - x[j]);
        }
    }

    // // Displaying the table (optional but helpful for verification)
    // cout << "\nDivided Difference Table:\n";
    // for (int j = 0; j < n; j++) {
    //     cout << fixed << setprecision(2) << x[j] << "\t";
    //     for (int i = 0; i < n - j; i++) {
    //         cout << a[i][j] << "\t";
    //     }
    //     cout << endl;
    // }


    // Interpolation logic
    double xp;
    cout << "\nEnter the value of x to interpolate: ";
    cin >> xp;

    double interpolated_y = a[0][0];
    double product_term = 1.0;

    for (int i = 1; i < n; i++) {
        product_term *= (xp - x[i - 1]);
        interpolated_y += a[i][0] * product_term;
    }

    cout << "\nThe interpolated value at x = " << xp << " is " << interpolated_y << endl;

    return 0;
}