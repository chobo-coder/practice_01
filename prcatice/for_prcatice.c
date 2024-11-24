
//hellow world
#include <stdio.h>

// int main(){
//     for(int k=1; k<10; k++){
//         printf("Hellow World%d\n",k);
//     }
// }


// int main(void){
//     int floor = 10;
//     for (int i=1;i<floor;i++){
//         for(int j=1;j<floor-i+1;j++){
//             printf(" ");
//         }
//         for (int k=1;k< 3*i ;k++){
//             printf("s");
//         }
//         printf("\n");
//     }
// }


// int main(void){    
//     int age;
//     age = 10; 
//     if (age>=8 && age <=13)
//     {
//         printf("초등학생 입니다\n");
//     }
//     else if(age>13)
//     {
//         printf("중학생입니다\n");
//     }
//     }


// int num; 
// char chr = 'q';
// int km,cm;
// float a1, a2 , a3;
// int int_num;
// int main(void){
//     int_num = 221474783648;
//     printf("int_nulm %d\n",int_num);
// }

// int main(void){
//     float float_num;
//     double double_num;
//     long double long_double;
//     float_num = 3.5f;
//     double_num = 44.5;
//     printf("float_num의 사이즈는 %d \n",sizeof float_num);
//     printf("double_num의 사이즈는 %d \n",sizeof double_num);

// }

// int main(void){
//     int a;
//     int b;
//     a = 11;
//     b = 12;
//     printf("a+b = %d\n",a+b );
//     printf("%6s\n","yes");
//     printf("%-6s\n","yes");
//     printf("%6s\n","yes");
//     printf("%6s\n","yes");
//     char chr = 'a';
//     putchar(chr);
//     putchar('a\n');
//     putchar('b\n');
//     puts("  이 함수는 문자열만 출력한다");

//     double city, rush, exp; 
//     double average;

//     city = 12.9;
//     rush = 10.7;
//     exp = 15.8;
//     puts("====연비====");
//     printf("%-8s= %4fKM\n","city",city);
//     printf("%-8s= %4fKM\n","rush",rush);
//     printf("%-8s= %4fKM\n","exp",exp);
// }





// int main(void){
//     int x =10 , y =20;

//     printf("%-10s =%3d\n ","(x==10)&&(y==20)",(x==10)&&(y==20));
//     printf("(x==10)&&(y==30) =%d\n ",(x==10)&&(y==30));
//     printf("(x==10)||(y==30) =%d\n ",(x==10)&&(y==30));
//     printf("(x==10)||(y==20) =%d\n ",(x==10)&&(y==20));
// }

// int main(void){
//     int x = 5 ,y=3;
    
//     printf("%d &%d \n",x,y,x&y);
//     printf("%d & %d = %d \n",x,y,x&y);
//     printf("%d | %d = %d \n",x,y,x|y);
//     printf("%d ^ %d = %d \n",x,y,x^y);
//     printf("~%d = %d \n",x,~x);
//     //int는 32 bit
// }

// int main(void){
//     int x = 20, y=2;
//     printf("%d<<%d = %d\n",x,y,x<<y);
//     printf("%d<<%d = %d\n",x,y,x<<(y+1));
//     printf("%d>>%d = %d\n",x,y,x>>y);
//     printf("%d>>%d = %d\n",x,y,x>>(y+1));
// }

// int main(void){
//     int score = 60;
//     if(score>60){
//         printf("합격입니다.");
//     }
//     else{
//         printf("불합격입니다.");
//     }

    

// }
int main(void){
    int score;

    printf("점수를  입력하세요: ");
    scanf("%d", &score);

    if(score>60){
        printf("합격입니다.\n");
        printf("축하합니다.\n");
        printf("등록하세요.\n");
        
    }
    printf("당신의 점수는 : %d 점 입니다",score);
    return;
}