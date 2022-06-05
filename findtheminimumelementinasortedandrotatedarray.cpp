#include <iostream>
using namespace std;

int main() {
	int size;
	int arr[size];
	cin>>size;
	for (int i = 0; i<size; i++){
		cin>>arr[i];
	}
	int base_index = 0;
	int last_index = size-1;
	while (base_index < last_index){
		int middle = (base_index+last_index)/2;
		if (arr[base_index]>arr[last_index]){
			base_index = middle+1;
		}
		else if (arr[base_index]==arr[last_index]){
			last_index--;
		}
		else{
			last_index = base_index;
		}
	}
	cout<<arr[last_index]<<endl;
}
