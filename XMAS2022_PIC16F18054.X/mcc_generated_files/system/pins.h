/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define LED_0_TRIS                 TRISAbits.TRISA0
#define LED_0_LAT                  LATAbits.LATA0
#define LED_0_PORT                 PORTAbits.RA0
#define LED_0_WPU                  WPUAbits.WPUA0
#define LED_0_OD                   ODCONAbits.ODCA0
#define LED_0_ANS                  ANSELAbits.ANSA0
#define LED_0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_0_GetValue()           PORTAbits.RA0
#define LED_0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED_0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED_0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RA2 aliases
#define LED_7_TRIS                 TRISAbits.TRISA2
#define LED_7_LAT                  LATAbits.LATA2
#define LED_7_PORT                 PORTAbits.RA2
#define LED_7_WPU                  WPUAbits.WPUA2
#define LED_7_OD                   ODCONAbits.ODCA2
#define LED_7_ANS                  ANSELAbits.ANSA2
#define LED_7_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_7_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_7_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_7_GetValue()           PORTAbits.RA2
#define LED_7_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_7_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_7_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_7_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_7_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_7_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_7_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_7_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA4 aliases
#define USER_BTN_TRIS                 TRISAbits.TRISA4
#define USER_BTN_LAT                  LATAbits.LATA4
#define USER_BTN_PORT                 PORTAbits.RA4
#define USER_BTN_WPU                  WPUAbits.WPUA4
#define USER_BTN_OD                   ODCONAbits.ODCA4
#define USER_BTN_ANS                  ANSELAbits.ANSA4
#define USER_BTN_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define USER_BTN_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define USER_BTN_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define USER_BTN_GetValue()           PORTAbits.RA4
#define USER_BTN_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define USER_BTN_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define USER_BTN_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define USER_BTN_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define USER_BTN_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define USER_BTN_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define USER_BTN_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define USER_BTN_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_RA5 aliases
#define LED_1_TRIS                 TRISAbits.TRISA5
#define LED_1_LAT                  LATAbits.LATA5
#define LED_1_PORT                 PORTAbits.RA5
#define LED_1_WPU                  WPUAbits.WPUA5
#define LED_1_OD                   ODCONAbits.ODCA5
#define LED_1_ANS                  ANSELAbits.ANSA5
#define LED_1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_1_GetValue()           PORTAbits.RA5
#define LED_1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RB4 aliases
#define LED_5_TRIS                 TRISBbits.TRISB4
#define LED_5_LAT                  LATBbits.LATB4
#define LED_5_PORT                 PORTBbits.RB4
#define LED_5_WPU                  WPUBbits.WPUB4
#define LED_5_OD                   ODCONBbits.ODCB4
#define LED_5_ANS                  ANSELBbits.ANSB4
#define LED_5_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_5_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_5_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_5_GetValue()           PORTBbits.RB4
#define LED_5_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_5_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_5_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_5_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_5_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_5_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_5_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_5_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define LED_8_TRIS                 TRISBbits.TRISB5
#define LED_8_LAT                  LATBbits.LATB5
#define LED_8_PORT                 PORTBbits.RB5
#define LED_8_WPU                  WPUBbits.WPUB5
#define LED_8_OD                   ODCONBbits.ODCB5
#define LED_8_ANS                  ANSELBbits.ANSB5
#define LED_8_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED_8_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED_8_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED_8_GetValue()           PORTBbits.RB5
#define LED_8_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED_8_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED_8_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED_8_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED_8_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LED_8_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LED_8_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED_8_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define LED_9_TRIS                 TRISBbits.TRISB6
#define LED_9_LAT                  LATBbits.LATB6
#define LED_9_PORT                 PORTBbits.RB6
#define LED_9_WPU                  WPUBbits.WPUB6
#define LED_9_OD                   ODCONBbits.ODCB6
#define LED_9_ANS                  ANSELBbits.ANSB6
#define LED_9_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define LED_9_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define LED_9_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define LED_9_GetValue()           PORTBbits.RB6
#define LED_9_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define LED_9_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define LED_9_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define LED_9_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define LED_9_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define LED_9_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define LED_9_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define LED_9_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define LED_10_TRIS                 TRISBbits.TRISB7
#define LED_10_LAT                  LATBbits.LATB7
#define LED_10_PORT                 PORTBbits.RB7
#define LED_10_WPU                  WPUBbits.WPUB7
#define LED_10_OD                   ODCONBbits.ODCB7
#define LED_10_ANS                  ANSELBbits.ANSB7
#define LED_10_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LED_10_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LED_10_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LED_10_GetValue()           PORTBbits.RB7
#define LED_10_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LED_10_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LED_10_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define LED_10_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define LED_10_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define LED_10_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define LED_10_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define LED_10_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set IO_RC0 aliases
#define LED_2_TRIS                 TRISCbits.TRISC0
#define LED_2_LAT                  LATCbits.LATC0
#define LED_2_PORT                 PORTCbits.RC0
#define LED_2_WPU                  WPUCbits.WPUC0
#define LED_2_OD                   ODCONCbits.ODCC0
#define LED_2_ANS                  ANSELCbits.ANSC0
#define LED_2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_2_GetValue()           PORTCbits.RC0
#define LED_2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_2_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_2_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_2_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LED_2_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LED_2_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED_2_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_RC1 aliases
#define LED_6_TRIS                 TRISCbits.TRISC1
#define LED_6_LAT                  LATCbits.LATC1
#define LED_6_PORT                 PORTCbits.RC1
#define LED_6_WPU                  WPUCbits.WPUC1
#define LED_6_OD                   ODCONCbits.ODCC1
#define LED_6_ANS                  ANSELCbits.ANSC1
#define LED_6_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED_6_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED_6_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED_6_GetValue()           PORTCbits.RC1
#define LED_6_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED_6_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED_6_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED_6_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED_6_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED_6_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED_6_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED_6_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IO_RC2 aliases
#define LED_3_TRIS                 TRISCbits.TRISC2
#define LED_3_LAT                  LATCbits.LATC2
#define LED_3_PORT                 PORTCbits.RC2
#define LED_3_WPU                  WPUCbits.WPUC2
#define LED_3_OD                   ODCONCbits.ODCC2
#define LED_3_ANS                  ANSELCbits.ANSC2
#define LED_3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_3_GetValue()           PORTCbits.RC2
#define LED_3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED_3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED_3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IO_RC3 aliases
#define LED_14_TRIS                 TRISCbits.TRISC3
#define LED_14_LAT                  LATCbits.LATC3
#define LED_14_PORT                 PORTCbits.RC3
#define LED_14_WPU                  WPUCbits.WPUC3
#define LED_14_OD                   ODCONCbits.ODCC3
#define LED_14_ANS                  ANSELCbits.ANSC3
#define LED_14_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_14_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_14_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_14_GetValue()           PORTCbits.RC3
#define LED_14_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_14_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_14_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_14_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_14_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_14_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_14_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_14_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define LED_13_TRIS                 TRISCbits.TRISC4
#define LED_13_LAT                  LATCbits.LATC4
#define LED_13_PORT                 PORTCbits.RC4
#define LED_13_WPU                  WPUCbits.WPUC4
#define LED_13_OD                   ODCONCbits.ODCC4
#define LED_13_ANS                  ANSELCbits.ANSC4
#define LED_13_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_13_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_13_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_13_GetValue()           PORTCbits.RC4
#define LED_13_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_13_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_13_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_13_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_13_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_13_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_13_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_13_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_RC5 aliases
#define LED_12_TRIS                 TRISCbits.TRISC5
#define LED_12_LAT                  LATCbits.LATC5
#define LED_12_PORT                 PORTCbits.RC5
#define LED_12_WPU                  WPUCbits.WPUC5
#define LED_12_OD                   ODCONCbits.ODCC5
#define LED_12_ANS                  ANSELCbits.ANSC5
#define LED_12_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_12_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_12_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_12_GetValue()           PORTCbits.RC5
#define LED_12_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_12_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_12_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_12_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_12_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_12_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_12_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_12_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set IO_RC6 aliases
#define LED_15_TRIS                 TRISCbits.TRISC6
#define LED_15_LAT                  LATCbits.LATC6
#define LED_15_PORT                 PORTCbits.RC6
#define LED_15_WPU                  WPUCbits.WPUC6
#define LED_15_OD                   ODCONCbits.ODCC6
#define LED_15_ANS                  ANSELCbits.ANSC6
#define LED_15_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_15_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_15_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_15_GetValue()           PORTCbits.RC6
#define LED_15_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_15_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_15_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LED_15_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LED_15_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED_15_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED_15_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED_15_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define LED_11_TRIS                 TRISCbits.TRISC7
#define LED_11_LAT                  LATCbits.LATC7
#define LED_11_PORT                 PORTCbits.RC7
#define LED_11_WPU                  WPUCbits.WPUC7
#define LED_11_OD                   ODCONCbits.ODCC7
#define LED_11_ANS                  ANSELCbits.ANSC7
#define LED_11_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_11_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_11_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_11_GetValue()           PORTCbits.RC7
#define LED_11_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_11_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_11_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED_11_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED_11_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED_11_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED_11_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_11_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the RA4 pin functionality
 * @param none
 * @return none
 */
void RA4_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for RA4 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for RA4 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void RA4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for RA4 pin.
 *        This is a dynamic interrupt handler to be used together with the RA4_SetInterruptHandler() method.
 *        This handler is called every time the RA4 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*RA4_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for RA4 pin. 
 *        This is a predefined interrupt handler to be used together with the RA4_SetInterruptHandler() method.
 *        This handler is called every time the RA4 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void RA4_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/