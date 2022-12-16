#ifndef CONFIGURATION_H
#define	CONFIGURATION_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include<stdint.h>

#define NUM_LED         (15U)
#define MAX_SPAN        (200U)
#define TOTAL_ITERATION (200000U)

#define MIN_PWM         (30U)
#define MAX_PWM         (90U)

#define DIR_DOWN        (0U)
#define DIR_UP          (1U)

#define MIN_SPEED       (1U)
#define MAX_SPEED       (8U)
    
    
volatile unsigned char led_on_interval[NUM_LED] = {100, 100, 100, 100, 100,
                                    100, 100, 100, 100, 100,
                                    100, 100, 100, 100, 100
                                    };

volatile unsigned char led_direction[NUM_LED] = {DIR_DOWN,DIR_UP,DIR_DOWN,DIR_UP,DIR_DOWN,
                                        DIR_DOWN,DIR_UP,DIR_DOWN,DIR_UP,DIR_DOWN,
                                        DIR_DOWN,DIR_UP,DIR_DOWN,DIR_UP,DIR_DOWN
                                        };

volatile unsigned char led_speed[NUM_LED] = {1,2,3,4,5,
                                    5,4,3,2,1,
                                    1,2,3,4,5
                                    };


void initialConfig();

void nextConfig();




#ifdef	__cplusplus
}
#endif

#endif	/* CONFIGURATION_H */

