#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int max(int*, int);
void shuffle(int*, int);

int main() {
    int n;
    cin >> n;
    int* arrn = new int[n];
    for(int i = 1; i <= n; i++) {
        arrn[i - 1] = i;
    }
    cout << endl;
    shuffle(arrn, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arrn[i];
    }
    int maximum = max(arrn, n);
    cout << sum - maximum << endl;
}

void shuffle (int* arrn, int n) {
    srand(time(0));
    int random1;
    int i = 0;
    while (i < n) {
        random1 = (rand() % (n - i)) + i;
        swap(arrn[i], arrn[random1]);
        arrn[i] *= (i + 1);
        i++;
    }
}

int max(int* arrp, int n) {
    int maxim = 0;
    for (int i = 0; i < n; i++) {
        if (arrp[i] > maxim) {
            maxim = arrp[i];
        }
    }
    cout << maxim << endl;
    return maxim;
}