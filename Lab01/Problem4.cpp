#include<Problem4.h>
#include<Problem3.h>


// Bubble Sort

void Bubble_Sort(int* arr,const int & size)
{
   int i, j;
   bool swapped;
   for (i = 0; i < size-1; i++)
   {
     swapped = false;
     for (j = 0; j < size-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           Swap_one(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }

     // If no two items were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}


// Quick Sort

int Partition (int* arr, int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            Swap_one(&arr[i], &arr[j]);
        }
    }
    Swap_one(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void Quick_Sort(int* arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = Partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        Quick_Sort(arr, low, pi - 1);
        Quick_Sort(arr, pi + 1, high);
    }
}
