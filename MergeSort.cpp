#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }


    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

      //cout << "\nsorted values: " << endl;
      for (int i = 0; i < temp.size(); i++)
      {
          arr[low+i] = temp[i];
      }



}
void Merge_sort(vector<int>& arr, int low, int high)
{
    if (low == high) return;
    int  mid = (low + high) / 2;
    Merge_sort(arr, low, mid);
    Merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);

}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the values of the array" << endl;
    vector<int> arr;
    for (int i = 0; i < n; i++) 
    {
        int values;
        cin >> values;
        arr.push_back(values);
    }
    int low = 0;
    int high = arr.size() - 1;
    cout << "unsorted values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    //calling the merge sort function
    Merge_sort(arr, low, high);

     cout << "\nsorted values: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << ", ";
    }
 

    return 0;
}
 
