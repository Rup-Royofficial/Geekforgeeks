#include<bits/stdc++.h>
using namespace std;

stack<int> St;

void insertAtBottom(int x){
	if(St.size()==0){
		St.push(x);
	}
	else{
		int temp = St.top();
		St.pop();
		insertAtBottom(x);
		St.push(temp);
	}
}

void reverseStack(){
	if(St.empty()){
		return;
	}
	else{
		int temp = St.top();
		St.pop();
		reverseStack();
		insertAtBottom(temp);
	}
	//stac.push(temp);
}

int main(){
	//stack<int> St;
	St.push(5);
	St.push(4);
	St.push(3);
	St.push(2);
	St.push(1);

	reverseStack();
	while(!(St.empty())){
		cout<<St.top()<<"-";
		St.pop();
	}
}