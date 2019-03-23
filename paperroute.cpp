#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // S is # of streets, H is # of houses, p is profit.
    // best is the maximum profit from each street.
    // total is the running total of contiguous houses.
    int S, H, best, total, p;
    cin >> S;
    for(int i=0; i<S; ++i){
        // Implements Kadane's algorithm.
        // Relies on the fact that a negative "prefix" of a subarray
        // can be discarded when searching for the maximum subarray.
        cin >> H;
        best = 0;
        total = 0;
        for(int j=0; j<H; ++j){
           cin >> p;
           total += p;
           if(total < 0) total = 0;
           if(total > best) best = total;
        }
        cout << best << "\n";
    }
    cout.flush();
}
