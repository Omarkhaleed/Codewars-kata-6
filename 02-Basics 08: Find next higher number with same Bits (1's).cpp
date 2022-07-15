#include<string>
#include<stdlib.h>
#include<cmath>
int nextHigher(int value)
{ int count = __builtin_popcount(value);
    value++;
    while(__builtin_popcount(value) != count){
        value++;
    }
    return value;
}
