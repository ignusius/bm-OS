#include "stdio.h"


char* itoa(int val, int base){

    static char buf[32] = {0};

    int i = 30;

    for(; val && i ; --i, val /= base)

        buf[i] = "0123456789abcdef"[val % base];

    return &buf[i+1];

}

/*char* lltoa(long long val, int base){

    static char buf[64] = {0};

    int i = 62;


    for(; val && i ; --i, val /= base) {
        buf[i] = "0123456789abcdef"[val % base];
    }

    return &buf[i+1];

}
*/

