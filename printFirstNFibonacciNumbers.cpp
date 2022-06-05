#include<bits/stdc++.h>
using namespace std;



int nFibonacci(int n, vector<int> &arr){
	if(n==0) return 0;
	if(n==1) return 1;
	int number = nFibonacci(n-1,arr);
	int number0 = nFibonacci(n-2,arr);
	arr.push_back(number);
	return number;
}


int main(){
	int n;
	cin>>n;
	vector<int> array;
	nFibonacci(n, array);
	for(int i = 0; i< array.size(); i++){
		cout<<array[i]<<" ";
	}
}