#include <iostream>
#include <ctime>

using namespace std;

long fnc(int n){
    srand(static_cast<unsigned int>(time(0)));
    
    long a = 0;
    int b = 3;
    int c = 3;
    long s = 0;
    
    for (int j = 1; j <= n; j++){
        a = 0;
        for (long i = 1; i <= 100000000; i++)
            a += b*2 + c - j;
        s+=a;
    }
    cout << "runtime = " << clock()/1000000.0 << endl << "f(" << n << ") = " << s << endl;
    return s;
}

int main() {

    long s = fnc(2);
    
    return 0;
}
