#include <bits/stdc++.h>
using namespace std;

int main() {
	int initialArray[] = {1,0,2,0};
	int length_1 = sizeof(initialArray)/sizeof(initialArray[0]);
	
	int finalArray[10000];
	int count = 0;
	for (int i = 0; i<length_1; i++){
		if (initialArray[i]!=0){
			finalArray[count] = initialArray[i];
			count++;
		}	
	}
	for (int i = count; i<length_1; i++){
		finalArray[count] = 0;
		count++;
	}
	
	for (int i = 0; i<length_1; i++){
		cout<<finalArray[i]<<" ";
	}
}
