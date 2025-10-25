
#include "FreeRTOS.h"
#include "task.h"

#include "pwm_app_bsp.h"

#include "gpio.h"
#include "st_pwm.h"

/*-----------------------------------------------------------*/

Pwm pwm;
Gpio led_gpio;

void pwm_test(void)
{
    static size_t x = 0;

    pwm.setDuty(&pwm, x);

    x = (x < 100) ? x + 1 : 0;

    //delay
    for (int i = 0; i < 1000000; i++)
    {
    }
}

int main(void)
{

    BSP_Init(&pwm, &led_gpio);

    StPwmEnable(&pwm, true);

    while (1)
    {
        pwm_test();
    }

    /* Start the scheduler to start the tasks executing. */
    vTaskStartScheduler();

    return 0;
}
