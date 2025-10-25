#ifndef STM32F746ZG_H 
#define STM32F746ZG_H

// Base address of flash and sram 
#define FLASH_BASEADDR              0x08000000U
#define SRAM_BASEADDR               0x20010000U 
#define SRAM1                       SRAM_BASEADDR 
#define SRAM2                       0x20040000U
#define ROM                         0x1FF00000U

//Base address of AHB & APB bus peripheral 
#define APB1PERIPH_BASEADDR         0x40000000U
#define APB2PERIPH_BASEADDR         0x40010000U
#define AHB1PERIPH_BASEADDR         0x40020000U
#define AHB2PERIPH_BASEADDR         0x50000000U

// Base address of 


#endif
