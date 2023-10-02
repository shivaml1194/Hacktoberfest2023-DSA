// Prime Number Examples :- 1 2 3 5 7 11 13 17 19 …

#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int N) {
  for (int i = 2; i < sqrt(N); i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {

  int n;
  cout<<"Enter a number : ";
  cin>>n;

  bool ans = checkPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}
