#ifndef _SIM_EEPROM_H
#define _SIM_EEPROM_H

#include "NUC100Series.h"

#define DATA_FLASH_EEPROM_BASE      0x18800 /* Configure Data Flash base address for EEPROM */
#define DATA_FLASH_EEPROM_END       0x4A000 /* Configure Data Flash end address for EEPROM */
#define DATA_FLASH_EEPROM_SIZE      (DATA_FLASH_EEPROM_END - DATA_FLASH_EEPROM_BASE)    /* Data Flash size for EEPROM */
#define EEPROM_BASE                 (DATA_FLASH_EEPROM_BASE)  /* Set EEPROM base address */
#define EEPROM_SIZE                 (DATA_FLASH_EEPROM_SIZE)  /* Set EEPROM size */

uint8_t SIM_EEPROM_READ(uint32_t address);
void SIM_EEPROM_WRITE(uint32_t address, uint8_t data);
int32_t SetDataFlashBase(uint32_t u32DFBA);



















#endif