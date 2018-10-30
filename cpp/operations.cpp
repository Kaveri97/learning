#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int or_op, and_op, xor_op;
	or_op = a|b;
	and_op = a&b;
	xor_op = a^b;
	cout<<"OR output "<<or_op<<endl;
	cout<<"AND output "<<and_op<<endl;
	cout<<"XOR output "<<xor_op<<endl;
	return 0;
	
}
