#include "bsp_motor.h"
#include "bsp_encoder.h"



void Motor_PID_Init(void)
{
    /*pid参数*/

    /*外设初始化*/
    Motor_Init(&hmotorA);
    Encoder_Init(&hencoderA);

}




