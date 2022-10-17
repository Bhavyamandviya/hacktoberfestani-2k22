#include <iostream>
using namespace std;

int largesum(int arr[][3], int i, int j)
{
    int max = INT_MIN;
    int rowindex=-1;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        if(sum>max)
        {
            max=sum;
            rowindex=i;
        }
        
    }
    cout << "max sum is "<< max <<endl;
    return rowindex;
}




int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   int ans= largesum(arr, 3, 3);
   cout<< " max row at index" << ans << endl;

    return 0;
}
