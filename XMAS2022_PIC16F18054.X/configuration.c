#include "configuration.h"

static unsigned char led_on_interval_initial[NUM_LED] = {100, 100, 100, 100, 100,
                                                100, 100, 100, 100, 100,
                                                100, 100, 100, 100, 100
                                                };

static unsigned char led_direction_initial[NUM_LED] = {DIR_DOWN,DIR_UP,DIR_DOWN,DIR_UP,DIR_DOWN,
                                                DIR_DOWN,DIR_UP,DIR_DOWN,DIR_UP,DIR_DOWN,
                                                DIR_DOWN,DIR_UP,DIR_DOWN,DIR_UP,DIR_DOWN
                                                };

static unsigned char led_speed_initial[NUM_LED] = {1,2,3,4,5,
                                            5,4,3,2,1,
                                            1,2,3,4,5
                                            };


void initialConfig()
{
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        led_on_interval[i] = led_on_interval_initial[i];
        led_direction[i] = led_direction_initial[i];
        led_speed[i] = led_speed_initial[i];
    }
}

void nextConfig()
{
    for(uint8_t i = 0; i < NUM_LED; i++)
    {
        if(led_on_interval[i] >= MAX_SPAN)
        {
            led_direction[i] = DIR_DOWN;
        }
        else if(led_on_interval[i] <= 0)
        {
            led_direction[i] = DIR_UP;
        }
        
        if(led_direction[i] == DIR_UP)
        {
            led_on_interval[i] += led_speed[i];
        }
        else
        {
            if(led_on_interval[i] < led_speed[i]) //The difference would be negative
            {
                led_on_interval[i] = 0;
            }
            else
            {
                led_on_interval[i] -= led_speed[i];
            }     
        }
    }
}
