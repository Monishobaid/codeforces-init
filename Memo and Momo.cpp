#include <iostream>
using namespace std;

int main(){
	long long A,B,C;
	cin >> A >> B >> C;

	if(A%C==0 & B%C==0){
		cout << "Both" << endl;
	}
	else if(A%C==0 & B%C!=0){
		cout << "Memo" << endl;
	}
	else if(A%C!=0 & B%C==0){
		cout << "Momo" << endl;
	}
	else{
		cout << "No One" << endl;
	}
	return 0;
}