// Write a C++ program to find the k largest elements in a given array of integers.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void findKLargestElements(int arr[], int n, int k) {
    if (k > n) {
        cout << "k cannot be greater than the size of the array." << endl;
        return;
    }


    priority_queue<int, vector<int>, greater<int>> minHeap;

    
    for (int i = 0; i < n; i++) {
        
        if (minHeap.size() < k) {
            minHeap.push(arr[i]);
        } else {
           
            if (arr[i] > minHeap.top()) {
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
    }


    cout << "The " << k << " largest elements are: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  
    findKLargestElements(arr, n, k);

    return 0;
}