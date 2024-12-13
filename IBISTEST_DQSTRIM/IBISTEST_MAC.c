#include <stdio.h> 
#include <stdlib.h>
#include "T4_DVAR.h"
#include <time.h>
//READ ME 
// 1 .dut check, dut이  살아 있는 것만 Test 할것. - 완료
// 2. CURRENTMEASURE 함수로 CURRENT 측정(RANDOM 함수 사용) - 완료
// 3. 측정한 Current 값을 IBISVAL에 저장 - 완료 
// 4. IBISVAL 값을 DQS의 경우는 7.54를 곱해서 저장할것 (IBSVALQS)
// 5. IBISVALQS 값을 BL별 평균값을 구할 것
// 6. IBISVALQS 값의 전체 MAX 값을 구할 것 -> IBISFLAG 를 변경하기위해 
// 7. IBISVALQS MAX 값이 각 BL 평균값보다 크다면 IBISFLAG 값을 변경해줄것 
// 8. INISFLAG 설정값 기준으로 IBIS TRIMMING 할 DUT 조건을 최종 활성화
// 9. IBIS TRIMMING 시작

void CURRENTMEASURE(int *dut,float IBISVAL[EQP_PARA][BL_LENTH][DQPN_NUM+DQSPN_NUM])
{
    srand((unsigned int)time(NULL));
    for(int dd =0; dd<EQP_PARA; dd++)
    {

        if(dut[dd]==1)
        {
            for(int pn = 0; pn < DQPN_NUM+DQSPN_NUM; pn++)
            {
                for(int bl = 0; bl<BL_LENTH; bl++)
                    {
                        float IBISCURRENT;
                        IBISCURRENT = (pn < DQPN_NUM) ? ((float)(rand() % 1000) / 1000.0 + 1.0) 
                              : 7.54 * ((float)(rand() % 1000) / 1000.0 + 1.0);
                        if(bl == 0) IBISVAL[dd][bl][pn] = IBISCURRENT;
                        if(bl == 1) IBISVAL[dd][bl][pn] = IBISCURRENT;
                        if(bl == 2) IBISVAL[dd][bl][pn] = IBISCURRENT;
                        if(bl == 3) IBISVAL[dd][bl][pn] = IBISCURRENT;
                    }
                
            }
        }    
    }
}


int main()
{
    int dut[EQP_PARA] = {0};
    float IBISVAL[EQP_PARA][BL_LENTH][DQPN_NUM+DQSPN_NUM] ={0};

    for(int i =0; i<EQP_PARA; i++)
    {
        if (i/2 ==0) dut[i]=1;
        CURRENTMEASURE(dut, IBISVAL);
    }
    printf("%f\n",IBISVAL[0][0][0]);
    
    return 0;

}




