#include "BubbleSort.h"
#include <iostream>
using namespace std;
BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
void BubbleSort:: BubbleSorter(int *arr, int n)
{
    cout <<"BubbleSort :"<<endl;
    bool swapped = true;
    int index1 = 0;
    int temp;
    while (swapped)
    {
        swapped = false;
        index1++;
        for (int index = 0; index < n - index1; ++index)
        {
            if (arr[index] > arr[index + 1])
            {
                temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
                swapped = true;
                for(int index3 = 0; index3 < n; ++index3)
                {
                    cout << arr[index3]<<" ";
                }
                cout <<endl;
            }

        }
    }
}
