// insertion sort - showing both ascending and descending order - not taking input from the user

#include<iostream>
using namespace std;

void insertionSortAsc(int arr[], int n)
{
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}
void insertionSortDesc(int arr[], int n)
{
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous] < current){
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
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
    int n = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Actual array: ";
    printArray(myArray, n);

    cout << "Sorted array (Ascending): ";
    insertionSortAsc(myArray, n);
    printArray(myArray, n);

    cout << "Sorted array (Descending): ";
    insertionSortDesc(myArray, n);
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
