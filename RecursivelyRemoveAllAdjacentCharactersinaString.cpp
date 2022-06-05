#include<bits/stdc++.h>
using namespace std;
/*
int main(){
	string input;
	cin>>input;
	stack<char> stac;
	for(int i = 0;i<input.length();i++){
		if(stac.empty()){
			stac.push(input[i]);
			continue;
		}
		if(input[i]==stac.top()){
			while(input[i]==stac.top()){
				stac.pop();
				stac.push(input[i]);
				i++;
			}
			stac.pop();
		}
		else{
			stac.push(input[i]);
		}
	}
	string str;
	//cout<<stac.top()<<endl;
	while(!(stac.empty())){
		str+=stac.top();
		stac.pop();
	}
	reverse(str.begin(),str.end());
	cout<<str;
*/
int main(){
	string input;
	cin>>input;

	while(1){
		int i = 0;
		string temp;
		while(i<input.length()){
			int j = i+1;
			while(input[i]==input[j] && j<input.length()){
				j++;
			}
			if(i+1==j){
				temp+=input[i];
			}
			i=j;
		}
		if(input.size()==temp.size()){
			cout<<temp;
			return 0;
		}
		input=temp;
	}
}