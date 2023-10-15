// PID: 730481841
// I pledge the COMP 211 honor code.

#include "bit_utils.h"

int two_pow(int n);

char* itob(int num, int size) {
        if ((num < -2147483648) | (num > 2147483647)) {
            printf("%s%d%s\n", "The two's complement 32-bit representation of ", num, " is: not possible.");
            return EXIT_SUCCESS;
        }
        char* result = (char*)malloc(size * sizeof(char));
        int a = 0;
        for (int i = size - 1; i >= 0; i--) {
            result[a] = (num & two_pow(i) ? '1' : '0');
            a++;
        }    
        return result;
}

int mask_bits(int origin, int mask) {
        int result = origin & mask;
        return result;
    }

int set_bits(int origin, int set) {
    int result = origin | set;
    return result;
}

int inverse_bits(int origin, int inv) {
    int result = origin ^ inv;
    return result;
}


int bit_select(int num, int start, int end) {
    int size = 32;
    int leftShift = (size - start) - 1;
    num <<= leftShift;
    unsigned int num2 = (unsigned int) num;
    num2 >>= leftShift;
    num2 >>= end;
    return num2;
}
         

int two_pow(int n) {
    int ret = 1;

    for (int i = 0; i < n; i++) {
        ret *= 2;
    }
    return ret;
}














