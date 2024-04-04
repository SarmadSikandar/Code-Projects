#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void insertion_sort(vector<int> &arr, int n) {
    for(int i=0;i<=n-1;i++){
        int j = i;
        while (j > 0 && (arr[j-1]>arr[j])) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    cout << "\nsorted values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the values of the array" << endl;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int values;
        cin >> values;
        arr.push_back(values);
    }
    cout << "unsorted values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    insertion_sort(arr, n);

    return 0;
}
/*
 time complexity -- O(n^2)
 simply in this algo we place the element in 
 its appropriate position in while loop iteration.

*/
 