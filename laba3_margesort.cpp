#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& start);
void mergeSort(vector<int>& left, vector<int>& right, vector<int>& results);

int main(){
	//create vector
	vector<int> numbers;
	
	int size, number;
	
	//input size of vector
	cin >> size;
	
	for(int i = 0; i<size; i++){
		//input the numbers into our vector
		cin >> number;
		numbers.push_back(number);
	}
	//call merge sort
	sort(numbers);
	
	for(int i = 0; i < numbers.size(); i++){
		//output the sort vector
		cout << numbers[i] << " ";
	}
	
	return 0;
}

void sort(vector<int>& start) {
	//check if the size of vector <= 1
	if(start.size() <= 1) return;
	//get the middle element of vector
	int middle = start.size() / 2;
	//create the vectors for left and right parts
	vector<int> left;
	vector<int> right;
	
	for(int j = 0; j < middle; j++){
		//add the elements into left vector which less the middle element
		left.push_back(start[j]);
	}
	
	for(int j = 0; j < (start.size()) - middle; j++){
		//add the elements into right vector which more the middle element
		right.push_back(start[middle + j]);
	}
	//sort the left and right vectors
	sort(left);
	sort(right);
	mergeSort(left, right, start);
}

void mergeSort(vector<int>& left, vector<int>& right, vector<int>& results){
	//size of left and right vectors
	int sLeft = left.size();
	int sRight = right.size();
	
	int i = 0, j = 0, k = 0;
	
	while(i < sLeft && k < sRight){
		//check that element of left vector smaller than element of right vector
		if(left[i] < right[k]){
			//add the element into result vector
			results[j] = left[i];
			// increment of index left vector
			i++;
		}
		else
		{
			//add the element into result vector(from right)
			results[j] = right[k];
			//increment of index right vector
			k++;
		}
		//increment of index results vector
		j++;
	}
	
	//add the last elements from left
	while(i < sLeft){
		results[j] = left[i];
		i++;
		j++;
	}
	
	//add the last elements from right
	while(k < sRight){
		results[j] = right[k];
		k++;
		j++;
	}
}

