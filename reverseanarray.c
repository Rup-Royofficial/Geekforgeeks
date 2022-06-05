#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size);
void reverseArray(int arr[], int start, int end);


int main()
{
	int arr[] = {1,2,3,4,5,6};
	printarray(arr, 6);
	reverseArray(arr, 0, 5);
	cout<<"Reverse arrya is"<<endl;
	printarray(arr, 6);
	
	return 0;
	
}
void printarray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
void reverseArray(int arr[], int start, int end)
{
	if (start>=end)
	{
		return;
		int  temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		reverseArray(arr,start+1,end-1)
	}
}
