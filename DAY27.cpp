// find maximum  right element in array
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4,2,7,1,3};
    int n = 5;

    for(int i=0;i<n;i++)
    {
        int rightMax = -1;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j] > rightMax)
            {
                rightMax = arr[j];
            }
        }

        cout << rightMax << " ";
    }

    return 0;
}