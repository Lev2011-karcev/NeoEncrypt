#include <iostream>
#include "diffie.h"
using namespace std;

int main(){
    long long p = 17;
    long long g = 3;
    long long a = 4;
    long long b = 5;
    long long s_k = secret_key(p, g, a);
    cout << s_k; // test;
    return 0;
}
