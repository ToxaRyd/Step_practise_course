#include <iostream>
using namespace std;
 
int main() {
  int f_n_1 = 0;
  int f_n_2 = 0;
  int f_n =0;  
  int N = 0;
  int index = 0;  
  cin >> N;
  if (N == 0) {cout << 0;   return 0;}
  if (N == 1) {cout << 1;   return 0;}
  f_n_2 = 0; 
  f_n_1 = 1;
  index++;  
  while (index++ < N){
    f_n = f_n_2 + f_n_1;
    f_n_2 = f_n_1;
    f_n_1 = f_n;  
  }
  cout << f_n;
}