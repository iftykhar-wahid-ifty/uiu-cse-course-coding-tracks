// insertion sort - showing both ascending and descending order - taking input from the user

#include<iostream>
#include<vector>
using namespace std;

int insertionSortAsc(vector<int> & arr)
{
    int n = arr.size();
    int swapCount = 0;
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous--;
            swapCount++;
        }
        arr[previous + 1] = current;
    }
    return swapCount;
}
int insertionSortDesc(vector<int> & arr)
{
    int n = arr.size();
    int swapCount = 0;
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous] < current){
            arr[previous + 1] = arr[previous];
            previous--;
            swapCount++;
        }
        arr[previous + 1] = current;
    }
    return swapCount;
}

void printArray(vector<int> & arr)
{
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    cout << "----- Insertion Sort Algorithm -----\n\n\n";

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> myArray(size);

    cout << "Enter the elements of the array: \n";
    for(int i = 0; i < size; i++){
        cout << "Enter for index [" << i << "]: ";
        cin >> myArray[i];
    }

    cout << "\nThe elements of the array are (unsorted): ";
    for(int i = 0; i < size; i++){
        cout << myArray[i] << " ";
    }
    cout << endl;

    int swapCount = 0;
    int press;
    do{
        cout << "\nTo see the array in sorted format, press 1 for ascending order, 2 for descending order: ";
        cin >> press;

        if(press == 1){
            swapCount = insertionSortAsc(myArray);
            cout << "Sorted array (Ascending): ";
            printArray(myArray);
            cout << "Total swap: " << swapCount;
            break;
        }else if(press == 2){
            swapCount = insertionSortDesc(myArray);
            cout << "Sorted array (Descending): ";
            printArray(myArray);
            cout << "Total swap: " << swapCount;
            break;
        }else{
            cout << "Invalid no. Press again.\n";
        }
    }while(true);

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
