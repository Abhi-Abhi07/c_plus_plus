#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// void printsum(int arr[][4], int row, int col)
// {
//     for (int col = 0; col < 4; col++)
//     {
//         int sum = 0;
//         for (int row = 0; row < 3; row++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//     }
// }

int rowofsum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int num = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (maxi < sum)
        {
            maxi = sum;
            num++;
        }
        cout << " " << sum;
    }
    cout << endl;
    cout << "max number is " << maxi << endl;
    cout << "large row indes is " << num;
}
int main()
{

    int arr[3][4];
    int sum = 0;
    cout << "Enter the element\n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // printsum(arr, 3, 4); //col wise sum

    rowofsum(arr, 3, 4);
    return 0;
}