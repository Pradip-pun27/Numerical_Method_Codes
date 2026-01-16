#include<iostream>
#include<cmath> // Preferred over math.h in C++
#include<iomanip> // For setting output precision

using namespace std;

double f(double x){
    return (cos(x) - x * exp(x)); //Fx: cosx-xe^x
}

int main() {
    double xl, xu, E, c;
    
    // 1. Precision formatting
    cout << fixed << setprecision(6); 

    cout << "Enter the values of xl and xu: ";
    cin >> xl >> xu;
    cout << "Enter the value of Error tolerance (in decimal): ";
    cin >> E;

    // 2. Initial Bracket Check
    if(f(xl) * f(xu) > 0){
        cout << "Error, Invalid guesses! Roots must have opposite signs." << endl;
    }
    else {
        // Optional: Safety counter to prevent infinite loops
        int step = 1;
        
        do {
            c = (xl + xu) / 2;
            
            // Print iterations (Optional, helps visualize convergence)
            cout << "Iteration " << step << ": x = " << c << " f(x) = " << f(c) << endl;

            if(f(c) * f(xl) > 0){
                xl = c;
            }
            else {
                xu = c;
            }
            step++;

        // 3. STOPPING CONDITION
        // Using fabs() for safety. 
        // Standard Bisection usually checks interval width: (xu - xl)
 }while ( fabs((xu - xl)/xu) > E ); 
        
        // If you specifically want to check f(x) instead, use:
        // } while ( fabs(f(c)) > E );

        cout << "The root of the equation is " << c << endl;
    }

    return 0;
}