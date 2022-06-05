#include <bits/stdc++.h>
using namespace std;

int searcharr(int arr[], int n, int index)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i]==index)
		{
			return i;
		}	
	}
	return -i;
}
int main()
{
	int arr[] = {1,2,3,4};
	int  index = 2;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<index <<" is present at index "<<searcharr(arr,n,index);
	cout<<endl;
	getchar();
	return 0;
}
