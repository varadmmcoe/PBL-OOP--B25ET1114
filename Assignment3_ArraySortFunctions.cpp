
#include <iostream>
using namespace std;

void accept(int &m, int arr[])
{
    cout << "Enter size of array: ";
    cin >> m;

    cout << "Enter array elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
}

void display(int m, int arr[])
{
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int m, int arr[])
{
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int s, arr[50];

    accept(s, arr);

    cout << "The unsorted array is: ";
    display(s, arr);

    sort(s, arr);

    cout << "The sorted array is: ";
    display(s, arr);

    return 0;
}
