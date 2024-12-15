#include <stdio.h>
//#include <stlib.h>

void deletesapce(char *str){
    int i, j;
    for(i=0, j=0; str[i]!='\0'; i++){
        if(str[i]!=' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main(void){
    char str[1000] ="string with spaces   ";
    printf("Before removing spaces: %s\n", str);
    deletesapce(str);
    printf("After removing spaces: %s\n", str);
    return 0;
}

