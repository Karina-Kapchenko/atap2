#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &data);
void quickSort(vector<int> &data, int low, int high);
int partition(vector<int> &data, int low, int high);

int main()
{
	int arr_size;
	cin >> arr_size;
	
	vector<int> data(arr_size);
	
	for(int i = 0; i < arr_size; i++)
	{
		cin >> data[i];
	}
	
	quickSort(data, 0, arr_size - 1);
	for(int i = 0; i < arr_size; i++)
	{
		cout << data[i] << ' ';
	}
}

void quickSort(vector<int> &data, int low, int high)
{
	if(low < high)
	{
		int pivot = partition(data, low, high);
		
		quickSort(data, low, pivot - 1);
		quickSort(data, pivot+1, high);
	}
}

int partition(vector<int> &data, int low, int high)
{
	int pivot = data[high];
	int i = low - 1;
	for(int j = low; j <= high - 1; j++)
	{
		if(data[j] <= pivot)
		{
			i++;
			swap(data[i], data[j]);
		}
	}
	swap(data[i+1], data[high]);
	return (i+1);
}
