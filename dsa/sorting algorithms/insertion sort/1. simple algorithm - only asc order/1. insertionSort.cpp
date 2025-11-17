// insertion sort - simple algorithm - ascending order only

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    cout << "----- Insertion Sort Algorithm -----\n\n\n";

    int myArray[] = {10, 7, 1, 4, 3, 6, 7, 2};
    int n = 8;

    cout << "Actual array: ";
    printArray(myArray, n);

    cout << "Sorted array (Ascending): ";
    insertionSort(myArray, n);
    printArray(myArray, n);

    cout << endl;
    return 0;
}


/*
Insertion Sort:

    Definition:
        Insertion Sort is a simple and intuitive comparison-based sorting algorithm.
        It builds the final sorted array (or list) one element at a time by repeatedly
        taking the next element from the unsorted portion and inserting it into the
        correct position in the sorted portion.

    Time Complexity:
        - Best Case: O(n)
        - Worst Case: O(n^2)

    Space Complexity:
        - O(1)
*/
