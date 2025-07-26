#include <stdio.h>
#include <stdbool.h>

bool isSubset(int arr1[], int arr2[], int size1, int size2) {
    for (int i = 0; i < size2; i++) {
        bool found = false;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, size1, size2))
        printf("Yes, b[] is a subset of a[]\n");
    else
        printf("No, b[] is NOT a subset of a[]\n");

    return 0;
}
