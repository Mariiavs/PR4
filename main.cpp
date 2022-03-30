#include <iostream>
#include <ctime>

using namespace std;

long fnc(int n){
    srand(static_cast<unsigned int>(time(0)));
    
    long a = 0;
    long res = 0;
    int b = 3;
    int c = 3;
    long s = 0;
    long counter = 1000;
    
    for (int j = 1; j <= n; j++){
        a = 0;
        for (int i = 1; i <= 100000; i++){
            res = 0;
            __asm {
                MOV AX, 0
                MOV BX, b
                SHL BX, 1
                MOV DX, j
                MOV ECX, counter
                L1:
                    ADD AX, BX
                    ADD AX, c
                    SUB AX, DX
                    LOOP L1
                MOV res, AX
            }
            a += res;
        }
        
        /*for (long i = 1; i <= 100000000; i++)
            a += b*2 + c - j;*/
        s+=a;
    }
    cout << "runtime = " << clock()/1000000.0 << endl << "f(" << n << ") = " << s << endl;
    return s;
}

int main() {

    long s = fnc(2);
    
    return 0;
}
