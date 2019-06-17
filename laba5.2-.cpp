#include<bits/stdc++.h>

using namespace std;

void shiftDown(vector<int>& vec, int parent, int remember);

int main()
{
	int heap_size;
	scanf("%d", &heap_size);
	
	vector<int> heap(heap_size);
	
	for(int i = 0; i < heap_size; i++)
	{
		scanf("%d", &heap[i]);	
	}
	
	int number_changes;
	scanf("%d", &number_changes);
	
	vector<int> index(number_changes);
	
	vector<int> value(number_changes);
	
	for(int i = 0; i < number_changes; i++)
	{
		scanf("%d", &index[i]);
		scanf("%d", &value[i]);
	}
	int parent;
	int remember;
	for(int i = 0; i < number_changes; i++)
	{
		parent = index[i] - 1;
		heap[parent] -= value[i];
		remember = heap[parent];
		
		shiftDown(heap, parent, remember);
	}
	
	for (int i = 0; i < heap.size(); i++)
    {
        printf("%d ", heap[i]);
    }
}

void shiftDown(vector<int>& vec, int parent, int remember)
{
	int parent_node = parent;
	int leftChild;
	int rightChild;
	
	while(true)
	{
		leftChild = (parent_node * 2) + 1;	
		rightChild = (parent_node * 2) + 2;
		
		if (leftChild >= vec.size())
        {
            break;
        }
        //  check if parent is largest
        if (vec[parent_node] > vec[leftChild] && vec[parent_node] > vec[rightChild] && rightChild < vec.size())
        {
            break;
        }
        //  check if parent is larger than left child fi there is no right child
        if (vec[parent_node] > vec[leftChild] && rightChild >= vec.size())
        {
            break;
        }

        if (vec[rightChild] > vec[leftChild] && vec[rightChild] > vec[parent_node] && rightChild < vec.size())
        {
            swap(vec[parent_node], vec[rightChild]);
            parent_node = rightChild;
            continue;
        }
        else
        {
            swap(vec[parent_node], vec[leftChild]);
            parent_node = leftChild;
            continue;
        }
	}
	
	if (remember == vec[parent_node])
    {
        printf("%d\n", parent_node + 1);
    }
    else if (remember == vec[leftChild])
    {
        printf("%d\n", leftChild + 1);
    }
    else
    {
        printf("%d\n", rightChild + 1);
    }
}
