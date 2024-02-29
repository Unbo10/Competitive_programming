#include <bits/stdc++.h>
using namespace std;

/* KEY TAKEAWAYS
Inversions: The number of operations needed to sort the array (that is, how many pairs of numbers need to be swapped).
Bubble sort: iterates through every single combination as if the array was in reverse order (inversion in each step) - O(n²)
*/

void PrintArray(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << " | " << arr[i];
    }
    cout << " |";
    cout << "\n";
}

int* GetArray(int size) {
    int* arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

//Bubble sorting is using a bubble to pick pairs of numbers. After they are compared, whether a swap is done if one is greater than the other, or not, the bubble will then go to the next pair of numbers until it has "carried" the greatest or smallest digit of the list. It goes through consecutive elementsZ
int* BubbleSort (int* usarr, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (usarr[j] > usarr[j + 1]) {
                swap(usarr[j], usarr[j + 1]);
            }
        }
    }
    return usarr;
}

int main() {
    int size = 0;
    cin >> size;
    int* arr = GetArray(size);
    int* bsort = BubbleSort(arr, size);
    PrintArray(bsort, size);
}