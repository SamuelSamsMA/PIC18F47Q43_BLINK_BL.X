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
 * @version Driver Version  3.1.1
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

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

// get/set RA6 aliases
#define BUTTON_TRIS                 TRISAbits.TRISA6
#define BUTTON_LAT                  LATAbits.LATA6
#define BUTTON_PORT                 PORTAbits.RA6
#define BUTTON_WPU                  WPUAbits.WPUA6
#define BUTTON_OD                   ODCONAbits.ODCA6
#define BUTTON_ANS                  ANSELAbits.ANSELA6
#define BUTTON_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define BUTTON_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define BUTTON_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define BUTTON_GetValue()           PORTAbits.RA6
#define BUTTON_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define BUTTON_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define BUTTON_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define BUTTON_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define BUTTON_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define BUTTON_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define BUTTON_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define BUTTON_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RE2 aliases
#define LED_TRIS                 TRISEbits.TRISE2
#define LED_LAT                  LATEbits.LATE2
#define LED_PORT                 PORTEbits.RE2
#define LED_WPU                  WPUEbits.WPUE2
#define LED_OD                   ODCONEbits.ODCE2
#define LED_ANS                  ANSELEbits.ANSELE2
#define LED_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LED_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LED_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LED_GetValue()           PORTEbits.RE2
#define LED_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LED_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define LED_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

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


#endif // PINS_H
/**
 End of File
*/