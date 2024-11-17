#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end, int i) {
    a[i] = start + rand() % (end - start + 1);
    if (i < numberOfElements - 1) {
        CreateArrayWithRandomElements(a, numberOfElements, start, end, i + 1);
    }
}

void PrintArray(int* a, int size, int i) {
    cout << "a[" << i << "] = " << a[i] << "; ";
    if (i < size - 1) {
        PrintArray(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

void FindMaxAndMin(int* a, int size, int i, int& maxElement, int& minElement) {
    if (i == size) {
        return;
    }
    if (a[i] > maxElement) {
        maxElement = a[i];
    }
    if (a[i] < minElement) {
        minElement = a[i];
    }
    FindMaxAndMin(a, size, i + 1, maxElement, minElement);
}

int FindSumOfMaxAndMin(int* a, int size) {
    int maxElement = a[0];
    int minElement = a[0];

    FindMaxAndMin(a, size, 0, maxElement, minElement);

    return maxElement + minElement;
}

int main() {
    srand((unsigned)time(NULL));

    const int size = 10;
    int array[size];

    CreateArrayWithRandomElements(array, size, -50, 50, 0);

    cout << "Array:" << endl;
    PrintArray(array, size, 0);

    int sum = FindSumOfMaxAndMin(array, size);

    cout << "\nSum of max and min elements: " << sum << endl;
    return 0;
}