// Solves https://pcs.org.au/problem/cuttingcake.
// This solution relies on the fact that when you cut away 
// all chords of a particular length, you are left with a 
// circle with a radius that spans from the center to the 
// midpoint of the chord.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(7); // Sets the precision required.
    
    // T is number of test cases. R is radius. 
    // C is chord length. A is area of circle.
    const double pi = 4*atan(1);
    int T;
    double R, C, new_radius, A;

    cin >> T;
    for(int i=0; i<T; ++i){
        cin >> R >> C;
        // Uses Pythagoras to calculate new_radius.
        new_radius = sqrt(pow(R,2) - pow((C/2),2));
        A = pi*pow(new_radius,2);
        cout << A << "\n";
    }
    cout.flush();
}
