#include <stdio.h>
#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"
int main() {
    int fun_sel;
    int arr_i[100];
    int len_arr_i = 0;
    scanf("%d", &fun_sel);
    int pr = getchar();
    while (pr != '\n') {
        if (pr == ' ') {
            scanf("%d", &arr_i[len_arr_i]);
            len_arr_i++;
        }
        pr = getchar();
    }
    switch(fun_sel){
        case 0:
            printf("%d\n", index_first_zero(len_arr_i, arr_i));
            break;
        case 1:
            printf("%d\n", index_last_zero(len_arr_i, arr_i));
            break;
        case 2:
            printf("%d\n", sum_between(len_arr_i, arr_i));
            break;
        case 3:
            printf("%d\n", sum_before_and_after(len_arr_i, arr_i));
            break;
        default:
            printf("Данные некорректны\n");
    }
    return 0;
}
