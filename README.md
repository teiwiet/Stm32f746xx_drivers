# STM32F7 Bare-Metal Drivers

A low-level embedded systems project implementing peripheral drivers for the **STM32F7** series microcontroller in **pure C**, without any HAL or CMSIS abstraction. The project focuses on understanding ARM Cortex-M architecture and achieving high-performance, low-latency I/O operations.

---

## 🚀 Features

- **GPIO Driver** — Configurable pin modes, alternate functions, and interrupt support.  
- **UART Driver** — Asynchronous serial communication with interrupt and polling modes.  
- **SPI Driver** — Full-duplex master mode with configurable data frame size and clock polarity.  
- **I2C Driver** — Master transmit/receive with start/stop condition handling.  
- **Ethernet Driver** — Custom lightweight Ethernet interface with reduced packet latency (~15%).  

---

## 🧠 Objectives

- Develop **bare-metal drivers** to gain deep understanding of STM32F7 hardware registers.  
- Learn **low-level debugging** and performance optimization techniques.  
- Provide reusable driver code for future projects and operating systems.

---

## ⚙️ Technical Details

| Component | Description |
|------------|-------------|
| **MCU** | STM32F767ZI (ARM Cortex-M7 @ 216 MHz) |
| **Language** | C (No HAL, No RTOS) |
| **Toolchain** | GCC ARM Embedded / STM32CubeIDE |
| **Debugger** | ST-Link V2 / OpenOCD |
| **Build System** | Makefile |
| **Test Platform** | Nucleo-F767ZI board |

---

## 📂 Directory Structure

```
├── src/
│   ├── gpio.c
│   ├── uart.c
│   ├── spi.c
│   ├── i2c.c
│   └── ethernet.c
├── include/
│   ├── gpio.h
│   ├── uart.h
│   ├── spi.h
│   ├── i2c.h
│   └── ethernet.h
├── linker.ld
├── startup_stm32f7xx.s
├── Makefile
└── README.md
```

---

## 🧩 Example Usage

```c
#include "gpio.h"
#include "uart.h"

int main(void) {
    GPIO_Init(GPIOB, PIN_0, GPIO_MODE_OUTPUT);
    UART_Init(UART1, 115200);

    while (1) {
        GPIO_Toggle(GPIOB, PIN_0);
        UART_SendString(UART1, "Hello, STM32F7!\r\n");
        delay_ms(500);
    }
}
```

---

## 📈 Performance

- **Ethernet driver latency:** Reduced by ~15% through optimized DMA buffer management.  
- **UART throughput:** Stable at 1 Mbps with interrupt-driven buffering.  
---

## 🧰 Tools Used

- STM32CubeIDE / arm-none-eabi-gcc  
- OpenOCD / ST-Link Utility  
- GDB for low-level debugging  
- Logic analyzer for SPI/I2C signal verification  

---

## 🧾 License

This project is licensed under the **MIT License**.  
You’re free to modify, distribute, and use it for both educational and commercial purposes.

---

## 👤 Author

**Viet Tran (teiwiet)**  
📧 [teiwiet33@gmail.com](mailto:teiwiet33@gmail.com)  
🔗 [github.com/teiwiet](https://github.com/teiwiet)  
💬 Passionate about low-level embedded systems and IoT security.

