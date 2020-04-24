#ifndef LCD_SPECIAL_CHARACTER_CONFIG_H
#define LCD_SPECIAL_CHARACTER_CONFIG_H

#include <stdint.h>

/* Client_Server_Interface */
/* Gathers operations allowing to command a LCD. */
typedef struct {
    void (*Create_Character) (
        uint8_t special_character_id,
        uint8_t* char_map );
} LCD_Special_Character_Config;

#endif