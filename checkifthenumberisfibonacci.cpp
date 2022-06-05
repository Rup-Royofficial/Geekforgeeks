#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int a = 0;
    int b = 1;
    int c = 0;
       
    if(N==a || N==b)
	{
        return "Yes";
    }
    while(c<=N)
	{
        if(c == N)
        return "Yes";
        a =b ;
        b = c;
        c = a+b;
    }
    return "No";
}
