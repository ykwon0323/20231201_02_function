# include <stdio.h>

int bigNum(int num1, int num2){

    if (num1>num2){
        return num1;
    }
    else{
        return num2;
    }

}


int main(void){

    int result;

    result = bigNum(1, 2);
    printf("더 큰 숫자는 %d 입니다 \n", result);

    result = bigNum(5, 9);
    printf("더 큰 숫자는 %d 입니다 \n", result);

    result = bigNum(100, 142);
    printf("더 큰 숫자는 %d 입니다 \n", result);


    return 0;

}