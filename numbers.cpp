#include <bits/stdc++.h>

typedef long long ll; //typedef allows us to shorten data types so we can write quicker
// typedef vector<int> vi; //Complex types can also be shortened, though apparently it cannot be done with vectors because they are not a type

using namespace std;
#define REP(i, a, b) for(int i = a; i <= b; i++) //These are macros, they are a shortened version of a string that will replace it throughout the program
#define SQ(a) (a)*(a)

int main() {

    /*Integers*/
    int x = 20;
    long long b = 9423049280LL; //A 64-bit integer, the biggest that can be possibly needed. The sufix LL is used to make sure the number is stored as a long long and not as an int
    ll c = (ll) x * x; //Casting needs to be done or the answer will be incorrect

    int n = 20;
    int m = 5;
    long long y = 1LL;
    
    /*Floating-point numbers*/
    double f2 = 0.5618516846168; //64-bit long, usually enough
    long double f1 = 0.9999999999999999999; //80-bit long, required if considerable precision is needed
    double err = (0.3*3) + 0.1; //Beacuse of precision, it might not print exactly 0.9999999999999 but 0.9999999998899989 for example
    printf("%.19f\n", err); //Printed with precision stated in the exercise

    if (abs(f2 - f1) < 1e-9) { //Compare float numbers using an ε to avoid precision troubles
        cout << f2 << " and " << f1 << "are equal\n";
    }

    REP(i, m, n) { //Awesome way to shorten a for cycle
        cout << "He";
    }
    cout << "\n" << SQ(n) << "\n";

}