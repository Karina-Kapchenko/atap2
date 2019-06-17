#include<bits/stdc++.h>

using namespace std;

int parent(int position);
int shiftUp(int index, int value, vector<int>& vec, vector<int>& res);

int size_vector;
int size_change;

int ind;
int value;
vector<int> result;

int main()
{
	scanf("%i", &size_vector);
	
	vector<int> heap(size_vector);
    
    for(int i = 0; i < size_vector; i++)
	{
    	cin >> heap[i];
	}
	
    scanf("%i", &size_change);
    
    vector<int> change(size_change);
    
    for(int i = 0; i < size_change; i++){
    	
    	scanf("%i", &ind);
		scanf("%i", &value); 
		
		change[i] = shiftUp(ind, value, heap, result);
	}
	for(int i = 0; i < size_change; i++)
	{
		cout << result[i] << endl;
	}
	for(int i = 0; i < size_vector; i++)
	{
		cout << heap[i] << " ";
	}
}

int parent(int position){
	return (position - 1) / 2;
}

int shiftUp(int index, int value, vector<int>& vec, vector<int>& res){
	index = index - 1;
	vec[index] = vec[index] + value;
	
	while(vec[index] > vec[parent(index)]){
		swap(vec[index], vec[parent(index)]);
		index = parent(index);
	}
	res.push_back(index + 1);
	return index;
}
