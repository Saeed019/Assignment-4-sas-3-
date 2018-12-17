#include "InsertionSort.h"
#include <iostream>
using namespace std;
InsertionSort::InsertionSort()
{
}
InsertionSort::~InsertionSort()
{
}
void InsertionSort::InsertionSorter(int arr[], int arr_size)
{
     cout <<"Insertion Sort :"<<endl;
    if(arr_size > 1)
    {
        int size = arr_size;
        for(int index = 1; index < size; ++index)
        {
            int index1 = index - 1;
            int key = arr[index];
            while(index1 >= 0 && arr[index1] > key)
            {
                arr[index1+1] = arr[index1];
                --index1;
            }
            arr[index1+1] = key;
            for(int index2 = 0; index2 < arr_size; ++index2)
    {
        cout << arr[index2]<<" ";
    }
    cout <<endl;
        }

    }
}
