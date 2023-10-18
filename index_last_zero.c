#include <stdio.h>
#include "index_last_zero.h"
int index_last_zero(int len_arr_i, int arr_i[]){
    for(int i = (len_arr_i- 1); i >= 0; i--){
        if(arr_i[i] == 0){
            return i;
        }
    }
}
