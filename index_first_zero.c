#include <stdio.h>
#include "index_first_zero.h"
int index_first_zero(int len_arr_i, int arr_i[]){
    for(int i = 0; i < len_arr_i; i++){
        if(arr_i[i] == 0){
            return i;
        }
    }
}
