//Autogenerated file
//MCU name: STM32L476MG
//MCU  xml: STM32L476M(E-G)Yx.xml
//GPIO remap/alternate function xml: GPIO-STM32L47x_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type variant_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_2 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_8 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOB, GPIO_PIN_10},
  { GPIOB, GPIO_PIN_11},
  { GPIOB, GPIO_PIN_12},
  { GPIOB, GPIO_PIN_13},
  { GPIOB, GPIO_PIN_14},
  { GPIOB, GPIO_PIN_15},
  { GPIOC, GPIO_PIN_0 },
  { GPIOC, GPIO_PIN_1 },
  { GPIOC, GPIO_PIN_2 },
  { GPIOC, GPIO_PIN_3 },
  { GPIOC, GPIO_PIN_4 },
  { GPIOC, GPIO_PIN_5 },
  { GPIOC, GPIO_PIN_6 },
  { GPIOC, GPIO_PIN_7 },
  { GPIOC, GPIO_PIN_8 },
  { GPIOC, GPIO_PIN_9 },
  { GPIOC, GPIO_PIN_10},
  { GPIOC, GPIO_PIN_11},
  { GPIOC, GPIO_PIN_12},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOD, GPIO_PIN_2 },
  { GPIOD, GPIO_PIN_4 },
  { GPIOD, GPIO_PIN_5 },
  { GPIOD, GPIO_PIN_6 },
  { GPIOD, GPIO_PIN_7 },
  { GPIOD, GPIO_PIN_8 },
  { GPIOD, GPIO_PIN_9 },
  { GPIOE, GPIO_PIN_7 },
  { GPIOE, GPIO_PIN_8 },
  { GPIOG, GPIO_PIN_9 },
  { GPIOG, GPIO_PIN_10},
  { GPIOG, GPIO_PIN_11},
  { GPIOG, GPIO_PIN_12},
  { GPIOG, GPIO_PIN_13},
  { GPIOG, GPIO_PIN_14},
  { GPIOH, GPIO_PIN_0 },
  { GPIOH, GPIO_PIN_1 },
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC0 ,
   PC1 ,
   PC2 ,
   PC3 ,
   PC4 ,
   PC5 ,
   PC6 ,
   PC7 ,
   PC8 ,
   PC9 ,
   PC10,
   PC11,
   PC12,
   PC13,
   PC14,
   PC15,
   PD2 ,
   PD4 ,
   PD5 ,
   PD6 ,
   PD7 ,
   PD8 ,
   PD9 ,
   PE7 ,
   PE8 ,
   PG9 ,
   PG10,
   PG11,
   PG12,
   PG13,
   PG14,
   PH0 ,
   PH1 ,
NUM_PINS,
};
*/

// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOG, GPIO_PIN_14 , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOB, GPIO_PIN_13 , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOC, GPIO_PIN_0  , GPIO_AF4_I2C3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOG, GPIO_PIN_13 , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOB, GPIO_PIN_14 , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOC, GPIO_PIN_1  , GPIO_AF4_I2C3  }, 
}; 

// --------------------SDIO--------------------
#define STM32_CHIP_HAS_SDIO

const stm32_af_pin_list_type chip_af_sdio_ck [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_12 , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_cmd [] = {
//SDMMC1
    { SDMMC1, GPIOD, GPIO_PIN_2  , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d0 [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_8  , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d1 [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_9  , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d2 [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_10 , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d3 [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_11 , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d4 [] = {
//SDMMC1
    { SDMMC1, GPIOB, GPIO_PIN_8  , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d5 [] = {
//SDMMC1
    { SDMMC1, GPIOB, GPIO_PIN_9  , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d6 [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_6  , GPIO_AF12_SDMMC1}, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d7 [] = {
//SDMMC1
    { SDMMC1, GPIOC, GPIO_PIN_7  , GPIO_AF12_SDMMC1}, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOG, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_4  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOG, GPIO_PIN_11 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_15 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_9  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOG, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOG, GPIO_PIN_9  , GPIO_AF6_SPI3  }, 
}; 

// --------------------TIM--------------------

// --------------------TIM1--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
    { USART1, GPIOG, GPIO_PIN_10 , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_5  , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
    { USART1, GPIOG, GPIO_PIN_9  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_4  , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOC, GPIO_PIN_0  , ADC_CHANNEL_1  }, 
    { GPIOC, GPIO_PIN_1  , ADC_CHANNEL_2  }, 
    { GPIOC, GPIO_PIN_2  , ADC_CHANNEL_3  }, 
    { GPIOC, GPIO_PIN_3  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_5  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_6  }, 
    { GPIOA, GPIO_PIN_2  , ADC_CHANNEL_7  }, 
    { GPIOA, GPIO_PIN_3  , ADC_CHANNEL_8  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_9  }, 
    { GPIOA, GPIO_PIN_5  , ADC_CHANNEL_10 }, 
    { GPIOA, GPIO_PIN_6  , ADC_CHANNEL_11 }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_12 }, 
    { GPIOC, GPIO_PIN_4  , ADC_CHANNEL_13 }, 
    { GPIOC, GPIO_PIN_5  , ADC_CHANNEL_14 }, 
    { GPIOB, GPIO_PIN_0  , ADC_CHANNEL_15 }, 
    { GPIOB, GPIO_PIN_1  , ADC_CHANNEL_16 }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {I2C2  , HAL_RCC_GetPCLK1Freq },  
    {I2C3  , HAL_RCC_GetPCLK1Freq },  
    {SPI2  , HAL_RCC_GetPCLK1Freq },  
    {SPI3  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  
    {USART3, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
    {USART1, HAL_RCC_GetPCLK2Freq },  
};
