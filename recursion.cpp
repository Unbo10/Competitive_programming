#include <iostream>
#include <string>
using namespace std;

string permutations(int*, int);

int main() {
    int n;
    cin >> n;
    int* perm = new int[n];
    permutations(perm, n);
}

string permutations (int* perm, int n) {
    if (n == 1) {
        return "1";
    }
    else{
        for(int i = 0; i < n; i++) {
            return (to_string(perm [n - 1]) + permutations(perm, n - 1));
        }
    }
    return "";
}