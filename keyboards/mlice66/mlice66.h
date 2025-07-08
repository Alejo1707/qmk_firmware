#ifndef MLICE66_H
    #define MLICE66_H
    #ifdef STM32_HSECLK
        #undef STM32_HSECLK
    #endif

    #ifdef STM32_LSECLK
        #undef STM32_LSECLK
    #endif

    #define STM32_LSECLK 0U
    #define STM32_HSECLK 16000000U
#endif
