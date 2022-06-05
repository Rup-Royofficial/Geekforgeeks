#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	int count = 0;
	cin>>n>>x;
	int arr[n];
	for (int i = 0; i<n; i++){
		cin>>arr[i];
		if (arr[i]==x){
			count++;
		}
	}

	cout<<count<<endl;
	return 0;
}