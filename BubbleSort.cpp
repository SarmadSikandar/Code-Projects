#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void bubble_sort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);

         }

    }

    cout << "\nsorted values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }

}

int main()
{
    int n =5;
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
    bubble_sort(arr, n);

    return 0;
}
/*
in bubble sort simple the max values goes to the last
time complexity -- O(n^2)
*/