#include <iostream>

using namespace std;
int sum(int n);


int main(){
  cout << "Hello World!" << endl;
  int n;
  cout << "Select a random number."<< endl;
  cin >> n;

  sum(n);
  cout << n << endl;
  return 0;
}
int sum(int n){
  int sums = 1;
  sums = sums + n;

  return sums;
}
