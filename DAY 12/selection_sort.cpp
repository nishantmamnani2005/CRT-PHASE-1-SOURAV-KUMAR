#include <iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Selection_Sort(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[mini] > nums[j])
            {
                mini = j;
            }
        }
        swap_array(nums[i], nums[mini]);
    }
}

int main()
{
    int arr[8] = {10, 7, 5, 9, 12, 15 ,1,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    Selection_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}