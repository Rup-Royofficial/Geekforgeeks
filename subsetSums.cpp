#include<bits/stdc++.h>
using namespace std;

int main(){
	int numberOfIntegers = 3;
	int arr[] = {5,2,1};
	vector<int> array;
	if(numberOfIntegers!=0){
		array.push_back(0);
	}
	for(int i = 0; i<numberOfIntegers; i++){
		array.push_back(arr[i]);
		for(int j = 0; j<numberOfIntegers; j++){
			if(j!=i && count(array.begin(),array.end(),arr[i]+arr[j])<1){
				array.push_back(arr[i]+arr[j]);
			}
		}
	}
	for(int i = 0;i<numberOfIntegers;i++){
		int n +=arr[i];
	}
	sort(array.begin(),array.end());
	for(int i =0 ;i<array.size();i++){
		cout<<array[i]<<" ";
	}
}