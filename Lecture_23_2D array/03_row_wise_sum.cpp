#include <iostream>
using namespace std;

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
            sum = arr[row][col] + sum;
        }
        cout << " = " << sum;
        cout << endl;
    }
    return 0;
}