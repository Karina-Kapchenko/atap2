#include <bits/stdc++.h>
 
using namespace std;
 
int binary_search(int* array, int arr_size, int element);

int main() {
 
    /*задати розмір масива*/
    int first_arr_size, second_arr_size;
    cin >> first_arr_size >> second_arr_size;
 
    /*створення масиву*/
    int first_arr[first_arr_size];
    int second_arr[second_arr_size];
 
    bool is_found;
 
    /*запис масиву*/
 
    for (int i = 0; i < first_arr_size; i++)
    {
        cin >> first_arr[i];
    }
   
    for (int i = 0; i < second_arr_size; i++)
    {
        cin >> second_arr[i];
    }
    
    /*перевірка*/
 
    for (int i = 0; i < second_arr_size; i++)
    {
        if(binary_search(first_arr, first_arr_size, second_arr[i]) != -1)
        {
            cout << "YES\n";

        } else {
            cout << "NO\n";
        }
    }
}

int binary_search(int* array, int arr_size, int element);
{
    int left = 0;            
    int right = arr_size - 1;    
 
    while (left <= right) 
    {
 
        int middle = (left + right) / 2;
 
        if (array[middle] == element) return middle; // if middle == key return key
 
        if (array[middle] < element) left = middle + 1; // if middle < key -> search in right
 
        if (array[middle] > element) right = middle - 1; // if middle > key -> serarch in left
 
    }
 
  return -1;
}
