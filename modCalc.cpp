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

int main(){
//    int q = 5009;
//    int p = 19697;

    int q = 5081;
    int p = 19609;
    int phi = (p-1)*(q-1);
    int d = 1 ;
    while(1){
        if(((Ae*d)%phi==1)){
            cout << d << endl;
            break;
        }
        d++;
    }
}
