#include "mcc_generated_files/system/system.h"
#include "led_wrap.h"
#include "configuration.h"

volatile unsigned int tim1_int_count = 0;

volatile unsigned long tim1_isr_total_num = 0;

volatile unsigned char refresh_config = 0;

void (*pON[NUM_LED]) (void);
void (*pOFF[NUM_LED]) (void);

static void initpFun()
{
    pON[0] = LED_0_ON;
    pON[1] = LED_1_ON;
    pON[2] = LED_2_ON;
    pON[3] = LED_3_ON;
    pON[4] = LED_5_ON;
    pON[5] = LED_6_ON;
    pON[6] = LED_7_ON;
    pON[7] = LED_8_ON;
    pON[8] = LED_9_ON;
    pON[9] = LED_10_ON;
    pON[10] = LED_11_ON;
    pON[11] = LED_12_ON;
    pON[12] = LED_13_ON;
    pON[13] = LED_14_ON;
    pON[14] = LED_15_ON;
    
    pOFF[0] = LED_0_OFF;
    pOFF[1] = LED_1_OFF;
    pOFF[2] = LED_2_OFF;
    pOFF[3] = LED_3_OFF;
    pOFF[4] = LED_5_OFF;
    pOFF[5] = LED_6_OFF;
    pOFF[6] = LED_7_OFF;
    pOFF[7] = LED_8_OFF;
    pOFF[8] = LED_9_OFF;
    pOFF[9] = LED_10_OFF;
    pOFF[10] = LED_11_OFF;
    pOFF[11] = LED_12_OFF;
    pOFF[12] = LED_13_OFF;
    pOFF[13] = LED_14_OFF;
    pOFF[14] = LED_15_OFF;
}

void BTN_ISR()
{     
    RESET();
}

void LED_ISR()
{
    tim1_int_count++;
    tim1_isr_total_num++;
    refresh_config = 1;
}

void prepareSleep()
{
    Timer1_Stop();
    
    tim1_int_count = 0;
    tim1_isr_total_num = 0;
    
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        pOFF[i]();
    }

    __delay_ms(10);
}


void refreshConfig()
{
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        if(led_on_interval[i] < tim1_int_count)
        {
            pON[i]();
        }
        else
        {
            pOFF[i]();
        }
    }
    
    if(tim1_int_count == MAX_SPAN)
    {
        tim1_int_count = 0;
        nextConfig();
    }
    
    refresh_config = 0;    
}


int main(void)
{
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    initpFun();
    tim1_int_count = 0;
    tim1_isr_total_num = 0;
        
    initialConfig();  
    
    Timer1_OverflowCallbackRegister(LED_ISR);
    RA4_SetInterruptHandler(BTN_ISR);
    
    while (1)
    {
        if(refresh_config == 1)
        {
            refreshConfig();
        }
        
        if(tim1_isr_total_num >= TOTAL_ITERATION)
        {
            prepareSleep();
            SLEEP();
        }
    }
}