#include <iostream>

using namespace std;
int sum(int n);
int product(int n);

int main(){
  cout << "Hello World!" << endl;
  int n;
  cout << "Select a random number."<< endl;
  cin >> n;

  sum(n);
  product(n);
  return 0;
}
int sum(int n){
  int sums = 0;
  sums = n + n;
  cout << sums << endl;
  return sums;
}
int product(int n){
  int prod = 0;
  prod = n * n;
  cout << prod << endl;
  return prod;
}
