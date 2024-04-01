#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void selection_sort(vector<int>& arr, int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mindex = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[mindex]) mindex = j;

        }
        swap(arr[mindex], arr[i]);
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
    selection_sort(arr, n);

    return 0;
}
/*
  firsly remember the equivalency i<n == i<=n-1
  In this code we have implemented the selection sort algo which
  is basically we select the smallest value in an array and replace it
  with the first element and after doing that start our array with +1 index
  so our array simply shifts to the one step right and keep doing that
  until we have a sorted array.
  Time Complexity = O(n^2)

*/
