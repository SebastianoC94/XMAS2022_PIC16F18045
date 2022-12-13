#include <time.h>
#include "mcc_generated_files/system/system.h"
#include "led_wrap.h"

#define NUM_LED         (15U)
#define MAX_SPAN        (200U)
#define TOTAL_ITERATION (200000U)

#define MIN_PWM         (30U)
#define MAX_PWM         (90U)

#define DIR_DOWN        (0U)
#define DIR_UP          (1U)

#define MIN_SPEED       (1U)
#define MAX_SPEED       (8U)


unsigned int tim1_int_count = 0;

unsigned long tim1_isr_total_num = 0;

unsigned char led_on_int[NUM_LED] = {100, 100, 100, 100, 100,
                                    100, 100, 100, 100, 100,
                                    100, 100, 100, 100, 100
                                    };

unsigned char led_direction[NUM_LED] = {1,1,1,1,1,
                                        1,1,1,1,1,
                                        1,1,1,1,1
                                        };

unsigned char led_speed[NUM_LED] = {1,2,3,4,5,
                                    5,4,3,2,1,
                                    1,2,3,4,5
                                    };

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

static int rand_range(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}


void initialConfig()
{
    srand((unsigned int)(time(NULL)));
    
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        led_on_int[i] = (unsigned char)rand_range(MIN_PWM, MAX_PWM);
        led_direction[i] = (unsigned char)rand_range(DIR_DOWN, DIR_UP);
        led_speed[i] = (unsigned char)rand_range(MIN_SPEED, MAX_SPEED);
    }
}

void nextConfig()
{
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        if(led_on_int[i] >= MAX_SPAN)
        {
            led_direction[i] = DIR_DOWN;
        }
        else if(led_on_int[i] <= 0)
        {
            led_direction[i] = DIR_UP;
        }
        
        if(led_direction[i] == DIR_UP)
        {
            led_on_int[i] += led_speed[i];
        }
        else
        {
            if(led_on_int[i] < led_speed[i]) //The difference would be negative
            {
                led_on_int[i] = 0;
            }
            else
            {
                led_on_int[i] -= led_speed[i];
            }     
        }
    }
}

void BTN_ISR()
{     
    RESET();
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

void LED_ISR()
{
    tim1_int_count++;
    tim1_isr_total_num++;
    
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        if(led_on_int[i] < tim1_int_count)
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
        if(tim1_isr_total_num >= TOTAL_ITERATION)
        {
            prepareSleep();
            SLEEP();
        }
    }
}