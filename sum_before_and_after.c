#include <stdio.h>
#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_before_and_after.h"
int sum_before_and_after(int len_arr_i, int arr_i[]){
    int sum_b_af= 0;
    int fst_zero = index_first_zero(len_arr_i, arr_i);
    int ls_zero = index_last_zero(len_arr_i, arr_i);
    for(int i = 0; i < fst_zero; i++ ) {
        sum_b_af += llabs(arr_i[i]);
    }
    for(int i = (ls_zero + 1); i < len_arr_i; i++ ) {
        sum_b_af += llabs(arr_i[i]);
    }
    return sum_b_af;
}
