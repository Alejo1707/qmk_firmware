#ifndef MCUCONF_H
    #define MCUCONF_H

    #define STM32F4xx_MCUCONF
    #define STM32F401_MCUCONF

    #define STM32_HSE_ENABLED TRUE
    #define STM32_LSE_ENABLED TRUE
    #define STM32_PLLSRC STM32_PLLSRC_HSE

    #undef STM32_PLLM_VALUE
    #define STM32_PLLM_VALUE 14

    #undef STM32_PLLN_VALUE
    #define STM32_PLLN_VALUE 336

    #undef STM32_PLLP_VALUE
    #define STM32_PLLP_VALUE 4

    #undef STM32_PLLQ_VALUE
    #define STM32_PLLQ_VALUE 8
#endif
