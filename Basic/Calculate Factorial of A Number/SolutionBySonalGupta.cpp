#include <iostream>
using namespace std;

int fact(int n){
	if(n == 1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans = fact(n);
	cout<<"Ouput = "<<ans<<endl;
	return 0;
}
