#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  cout << "Excercise Solution - Duong Quang Tuan - 1920069\n";
  
  int N = -1;
  
  while(N <= 0){
    cout << "Please input a positive number: ";
    cin >> N;
      
    if(!cin.good()){
        cin.clear();
        cin.ignore(1024, '\n');
    }
  }
  
  int M = N%2 ? (2*N - 1) : 2*N;

  for(int i = 1; i <= N; i++){
    for(int j = i; j > 0; j--){
      cout << '*';
    }

    for(int j = (N - i)*2 -1 ; j > 0; j--){
      cout << ' ';
    }

    for(int j = (i == N ? i-1 : i); j > 0; j--){
      cout << '*';
    }

    cout << '\n';
  }
}
