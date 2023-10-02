// Ex. 64 has divisors as :- 1,2,4,8,32,16,64


#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

void printDivisors(int n){
    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
	
	cout << "\n";
}

int main(){
	printDivisors(49);
        return 0;
}

