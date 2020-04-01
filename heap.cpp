#include <iostream>
using namespace std;


void heapify(int array[], int n, int i)
{
	
		int largest = i;
		int left = 2*i+1;
		int right = 2*i + 2;

		if (left < n && array[left] > array[largest])
		{
			largest = left;
		}

		if (right < n && array[right] > array[largest])
		{
			largest = right;
		}

		if (largest != i)
		{
			swap(array[i],array[largest]);
			heapify(array, n,largest);
		}
		
}

void print(int array[], int n)
{
	for ( int v =0; v<n; v++)
	{
		cout<<array[v]<<" ";
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	
	int array[] = { 3, 10, 67, 21, 55, 5, 42, 35, 12, 1, 25, 17, 99, 19, 36};
	

	int n = sizeof(array)/sizeof(array[0]);

	print(array, n);

	for(int i = n/2 - 1; i>=0; i--)
	{
		heapify(array, n, i);
	}

	print(array, n);

	return 0;
}