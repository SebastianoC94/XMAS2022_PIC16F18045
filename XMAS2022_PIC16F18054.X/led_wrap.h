/* 
 * File:   led_wrap.h
 * Author: sebas
 *
 * Created on 12 dicembre 2022, 20.41
 */

#ifndef LED_WRAP_H
#define	LED_WRAP_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "mcc_generated_files/system/system.h"

inline void LED_0_ON(){ LED_0_SetHigh(); }
inline void LED_1_ON(){ LED_1_SetHigh(); }
inline void LED_2_ON(){ LED_2_SetHigh(); }
inline void LED_3_ON(){ LED_3_SetHigh(); }
inline void LED_5_ON(){ LED_5_SetHigh(); }
inline void LED_6_ON(){ LED_6_SetHigh(); }
inline void LED_7_ON(){ LED_7_SetHigh(); }
inline void LED_8_ON(){ LED_8_SetHigh(); }
inline void LED_9_ON(){ LED_9_SetHigh(); }
inline void LED_10_ON(){ LED_10_SetHigh(); }
inline void LED_11_ON(){ LED_11_SetHigh(); }
inline void LED_12_ON(){ LED_12_SetHigh(); }
inline void LED_13_ON(){ LED_13_SetHigh(); }
inline void LED_14_ON(){ LED_14_SetHigh(); }
inline void LED_15_ON(){ LED_15_SetHigh(); }

inline void LED_0_OFF(){ LED_0_SetLow(); }
inline void LED_1_OFF(){ LED_1_SetLow(); }
inline void LED_2_OFF(){ LED_2_SetLow(); }
inline void LED_3_OFF(){ LED_3_SetLow(); }
inline void LED_5_OFF(){ LED_5_SetLow(); }
inline void LED_6_OFF(){ LED_6_SetLow(); }
inline void LED_7_OFF(){ LED_7_SetLow(); }
inline void LED_8_OFF(){ LED_8_SetLow(); }
inline void LED_9_OFF(){ LED_9_SetLow(); }
inline void LED_10_OFF(){ LED_10_SetLow(); }
inline void LED_11_OFF(){ LED_11_SetLow(); }
inline void LED_12_OFF(){ LED_12_SetLow(); }
inline void LED_13_OFF(){ LED_13_SetLow(); }
inline void LED_14_OFF(){ LED_14_SetLow(); }
inline void LED_15_OFF(){ LED_15_SetLow(); }

#ifdef	__cplusplus
}
#endif

#endif	/* LED_WRAP_H */

