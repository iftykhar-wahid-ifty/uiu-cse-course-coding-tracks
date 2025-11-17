// Insertion Sort - Ascending and Descending Order
// User Input with Swap Counting and Repeat Option

#include <iostream>
#include <vector>
using namespace std;

// Ascending insertion sort
int insertionSortAsc(vector<int> &arr) {
    int n = arr.size();
    int swapCount = 0;
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current) {
            arr[previous + 1] = arr[previous];
            previous--;
            swapCount++;
        }
        arr[previous + 1] = current;
    }
    return swapCount;
}

// Descending insertion sort
int insertionSortDesc(vector<int> &arr) {
    int n = arr.size();
    int swapCount = 0;
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] < current) {
            arr[previous + 1] = arr[previous];
            previous--;
            swapCount++;
        }
        arr[previous + 1] = current;
    }
    return swapCount;
}

// Print an array
void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    cout << "----- Insertion Sort Algorithm -----\n\n";

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> myArray(size);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter for index [" << i << "]: ";
        cin >> myArray[i];
    }

    // Original array
    cout << "\nArray before sorting: ";
    printArray(myArray);

    int press;
    do {
        // Copy of the original array
        vector<int> tempArray = myArray;
        int swapCount = 0;

        // Menu
        cout << "\nChoose sorting order:\n";
        cout << "1. Ascending order\n";
        cout << "2. Descending order\n";
        cout << "Your choice: ";
        cin >> press;

        if (press == 1) {
            swapCount = insertionSortAsc(tempArray);
            cout << "\nSorted array (Ascending): ";
            printArray(tempArray);
            cout << "Total swaps: " << swapCount << endl;
        } else if (press == 2) {
            swapCount = insertionSortDesc(tempArray);
            cout << "\nSorted array (Descending): ";
            printArray(tempArray);
            cout << "Total swaps: " << swapCount << endl;
        } else {
            cout << "Invalid choice. Please try again.\n";
            continue; // skip repeat prompt if invalid input
        }

        // Ask to continue
        char continueOrNot;
        cout << "\nDo you want to sort again? (Y/N): ";
        cin >> continueOrNot;
        if (continueOrNot != 'Y' && continueOrNot != 'y') {
            break;
        }

    } while (true);

    cout << "\nProgram ended.\n";
    return 0;
}

/*
Insertion Sort:

    Definition:
        Insertion Sort is a simple comparison-based sorting algorithm.
        It builds the final sorted array one element at a time by repeatedly
        inserting the next element from the unsorted portion into its correct position.

    Time Complexity:
        - Best Case: O(n) (already sorted)
        - Worst Case: O(n^2)
        - Average Case: O(n^2)

    Space Complexity:
        - O(1)
*/
