#include <stdio.h>

// int main(void){
//     int select, value;
//     printf("��ȯ�� ������ ������ ����\n");
//     printf("1:10 ������ 16������ ��ȯ\n");
//     printf("2:16 ������ 10������ ��ȯ\n");
//     printf("3:10 ������ 8������ ��ȯ\n");
//     printf("4:8 ������ 10������ ��ȯ\n");

//     printf("���ϴ� ��ȯ�� �����ϼ���:");
//     scanf("%d",&select);
//     if(select==1){
//         printf("10������ �Է��ϼ���");
//         scanf("%d",&value);
//         printf("%d�� 16������ ��ȯ�ϸ� %X �Դϴ�\n",value,value);
//     }
//     else if(select==2){
//         printf("16������ �Է��ϼ���");
//         scanf("%X",&value);
//         printf("%X�� 10������ ��ȯ�ϸ� %d �Դϴ�\n",value,value);
//     }
//     else if(select==3){
//         printf("10������ �Է��ϼ���");
//         scanf("%d",&value);
//         printf("%d�� 8������ ��ȯ�ϸ� %o �Դϴ�\n",value,value);
//     }
//     else if(select==4){
//         printf("8������ �Է��ϼ���");
//         scanf("%o",&value);
//         printf("%o�� 10������ ��ȯ�ϸ� %d �Դϴ�\n",value,value);
//     }
//     else
//         printf("\n1~4������ ���� �Է��ϼ���\n");
//         return 0;


// }

// int main(void)

// {
//     int num, limit, sum =0 ;
//     printf("ddddd");
//     scanf("%d", &limit);
//     num = 0; 
//     while(num<=limit){
//         num++;
//         if (num%2==0)
//             continue;
//         sum += num;
//     }
//     printf("%d %d",num,sum);
//     return 0;
// }


// & < �������� �ּ�
// * < �������� ��

// int main(void)
// {
//     int val = 10;
//     int *val_adr; // �ּҸ� ����� �� �ִ� ������
//     val_adr = &val; 
//     printf("val : %d\n",val);
//     printf("val_adr : %d\n",val_adr);

// }


// int main(void)
// {
//     int val =10 ;
//     int *ival_adr = &val;

//     printf("val : %d\n",val);
//     printf("val_adr : %d\n",ival_adr);
//     printf("val_val : %d\n",*ival_adr);

// }

// int main(void)
// {
//     int i =11, j =22 ,*p;
//     p = &j;
//     i = *p;

//     printf("i= %d j =%d\n",i,j);
//     return 0; 
// }

// int main(void)
// {
//     char i ='a', j ='b';
//     char *p1,*p2 ;
//     p1 = &i;
//     p2 = &j; 
//     *p1 = *p2; //p1 �ּҿ� �ִ� Value�� p2�� ���� ����
//     printf("%d,%d\n",p1,p2); /// �ּ�
//     printf("%c,%c\n",*p1,*p2); //value 

//     return 0; 
// }

// int main(void)
// {
//     int i, *p;
//     p =&i;
//     i= 10;
//     printf("i:%d\n",i);
//     printf("*P:%d\n",*p);
    
//     *p=20 ;

//     printf("i:%d\n",i);
//     printf("*P:%d\n",*p);
// }

// main(void)
// {
//     char ch[6] = {'a','b','c','d','e','f'};
//     int db[6] = {1,2,3,4,5,6};
//     int i;
//     for(i=0;i<6;i++){
//         printf("ch[%d] =%c\n",i,*(ch+i));
//         printf("db[%d] =%d\n",i,*(db+i));
//     }
// }


// int main(void)
// {
//     int matrix[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
//     int row =3, column =5;
//     for (row=0;row<3;row++){
//         for (column=0;column<5;column++){
//             printf("maxtrix[%d][%d]=%d\n",row,column,*(*(matrix+row)+column));
//         }
//     }
// }


////����Ʈ �Լ��� �Լ��� ������ �����Ҽ�����
// void change(int*, int*);

// int main(void){
//     int i =77, j = 33;
//     printf("i =%d, j=%d\n",i,j);
//     change(&i,&j);
//     printf("i =%d, j=%d\n",i,j);

// }

// void change(int *i,int *j)
// {
//     int temp = *i;
//     *i=*j;
//     *j=temp;
// }#include <stdio.h>


// int main(void)
// {
// 	for (int i = 1; i <= 5; ++i)
// 	{
// 		printf("%d", i);
// 	}
// 	for (int j = 1; j <= 5; j++)
// 	{
// 		printf("%d", j);
// 	}
// 	return 0;
// }


void del_char(char *string);
int main(void)
{
    char string[] ="school";
    del_char(string);
    return 0;
}

void del_char(char *string)
{
    int i,j;
    for(i=j=0;*(string+i) != '\0'; ++i){
        if(*(string+i) != 'o'){
            *(string+j)=*(string+i);
            j++;
        }
    }
    *(string+j)= '\0';
    printf("result: %s\n",string);
}

