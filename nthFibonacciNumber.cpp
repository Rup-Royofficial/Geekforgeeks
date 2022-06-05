#include<bits/stdc++.h>
using namespace std;

int fibonacci(long long  int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int number;
	cin>>number;
	cout<<fibonacci(number);
}
