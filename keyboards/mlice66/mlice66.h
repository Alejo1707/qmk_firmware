#ifndef MLICE66_H
    #define MLICE66_H
    #ifdef STM32_HSECLK
        #undef STM32_HSECLK
    #endif
    #define STM32_HSECLK 16000000U
#endif
