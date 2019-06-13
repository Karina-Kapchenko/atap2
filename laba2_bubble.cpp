#include <bits/stdc++.h>

using namespace std;

void BubleSort(int arr[], int size);

int main(){

// initialize arr_size

int array_size;

// input arr_size

cin >> array_size;

// initialize array

int array[array_size];

// input array

for(int i = 0; i < array_size; i++)
{
   cin >> array[i];
}

//sorting

BubleSort(array, array_size);

// output new array

for(int i = 0; i < array_size; i++)
{
   cout << array[i] << " ";
}

}

void BubleSort(int arr[], int size)
{
   int i, j;
   for(i = 0; i < size; i++)
   {
      for(j = i; j < size; j++)
      {
         if(arr[i] > arr[j])
         {
            swap(arr[i], arr[j]);
         }
      }
   }
}
