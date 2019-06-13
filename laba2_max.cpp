#include <bits/stdc++.h>
using namespace std;

void sortBySelect(int array[], int n);

int main()
{

   // input arr_size

   int size;
   cin >> size;

   // initialize array

   int arr[size];

   // input array

   for(int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }

   // sort

   sortBySelect(arr, size);

   // output array

   for(int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
}

void sortBySelect(int array[], int n)
{
   int i, j, max_index;

   for(i = n - 1; i >= 0; i--)
   {
      max_index = i; // present value

      for(j = i; j >= 0; j--) // for others elements after [i]
      {
         if(array[j] > array[max_index]) // if element > max element
         {
            max_index = j; // remember index this element
         }
      }
      swap(array[max_index], array[i]); // swap the present element with max elements
   }
}
