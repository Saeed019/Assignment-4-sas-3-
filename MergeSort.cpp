#include "MergeSort.h"
#include <iostream>
using namespace std;
MergeSort::MergeSort()
{

}

MergeSort::~MergeSort()
{

}
void merge(int value[], int startLeft, int endLeft, int startRight, int endRight)
{
    int tempArray[endRight];
    int valueStart = startLeft;
    int valueEnd = endRight;
    int count=0;

    while(startLeft<=endLeft && startRight<=endRight)
    {
        if(value[startLeft]<value[startRight])
        {
            tempArray[count++] = value[startLeft++];
        }
        else
        {
            tempArray[count++] = value[startRight++];
        }
    }
    if(startLeft<=endLeft)
    {
        while(startLeft<=endLeft)
        {
            tempArray[count++]=value[startLeft++];
        }
    }
    if(startRight<=endRight)
    {
        while(startRight<=endRight)
        {
            tempArray[count++]=value[startRight++];
        }
    }
    count = 0;
    for(int index = valueStart; index<=valueEnd; index++)
    {
        value[index] = tempArray[count++];
    }
}

void MergeSort::merge_sort(int value[], int startIndex, int endIndex)
{
     if(startIndex<endIndex)
    {
        int middleIndex = (startIndex+endIndex)/2;
        merge_sort(value,startIndex,middleIndex);
        merge_sort(value,middleIndex+1,endIndex);
        merge(value,startIndex,middleIndex,middleIndex+1,endIndex);
        for(int index=0; index<8; index++)
        {
            cout<<value[index]<<" ";
        }
        cout<<endl;
    }

}
