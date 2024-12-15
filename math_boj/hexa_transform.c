#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int hex_to_dec(char *hex_num){
    int decimal = 0;
    int hex_len = strlen(hex_num);
    printf("%d\n", hex_len);
    for(int i = 0; hex_num[i]!= '\0'; i++){
        if (hex_num[i] >='A' && hex_num[i] <= 'F') decimal = decimal+ (hex_num[i]-'A'+10)*pow(16, hex_len-i-1);
        if (hex_num[i]<'A' && hex_num[i] >= '0')   decimal = decimal + (hex_num[i]-'0')*pow(16, hex_len-i-1);
    }
    return decimal;
}
void to_upperstring(char *str){
    for(int i = 0; str[i]!= '\0'; i++){
        str[i] = toupper(str[i]);
    }
}

int main(void){
    printf("Enter the length of hexadecimal number: ");
    char hexanum[1000];
    int decimal_num;
    scanf("%s", hexanum);
    to_upperstring(hexanum);
    hex_to_dec(hexanum);
    decimal_num =hex_to_dec(hexanum);
    printf("%d\n", decimal_num);
    return 0;
}