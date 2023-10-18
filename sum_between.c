#include <stdio.h>
#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
int sum_between(int len_arr_i, int arr_i[]){
    int sum_b = 0;
    int fst_zero = index_first_zero(len_arr_i, arr_i);
    int ls_zero = index_last_zero(len_arr_i, arr_i);
    for(int i = (fst_zero + 1); i < ls_zero; i++ ) {
        sum_b += llabs(arr_i[i]);
    }
    return sum_b;
}
