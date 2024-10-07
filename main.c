 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/
#include "mcc_generated_files/system/system.h"


#include <stdint.h> 
#ifdef __XC8__ 
#include <xc.h> 
#endif 
volatile const uint16_t 
#ifdef __XC8__ 
__at(0x1FFFE) 
#endif 
applicationFooter __attribute__((used, section("application_footer"))) = 0xFFFF;


int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
		LED_Toggle();
		if (BUTTON_GetValue())
			__delay_ms(500);
		else
			__delay_ms(100);
    }
}