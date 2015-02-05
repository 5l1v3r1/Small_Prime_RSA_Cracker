#include <iostream>
#include <vector>
#include <thread>
#include <cstdlib>
#include <cmath>
using namespace std;
int An= 98662273;
int Ae= 1313;
int Bn= 99633329;
int Be= 2791;
//n=p*q
//[phi](n)=(p-1)(q-1)
//ed = 1mod[phi](n)

int prime(long n){ //does not work for number: 2
  for(long k = 2;k<=sqrt(n);k++){
      if(n%k==0){
	return 0;
      }
  }
  return 1;
}

int main(){
  int start=3;
  int range = 100000;
  vector<int> primeNumbers;
  for(long n =start;n<start+range;n+=2){
    if(prime(n)==1){
      primeNumbers.push_back(n);
    }
  }

  for(int k =0;k<primeNumbers.size();k++){
//      cout << k << endl;
      for(int i =0;i<primeNumbers.size();i++){
          if(((primeNumbers[k])*(primeNumbers[i]))==Bn){
              cout << primeNumbers[k] << "and" << primeNumbers[i] << endl;
          }
      }
  }

}
