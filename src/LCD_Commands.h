#ifndef LCD_COMMANDS_H
#define LCD_COMMANDS_H

#include <stdint.h>

/* Client_Server_Interface */
/* Gathers operations allowing to command a LCD. */
typedef struct {
    void (*Set_Cursor_Position) ( uint8_t line_index, uint8_t column_index );
    void (*Print) ( char* text );
    void (*Print_Special_Character) ( uint8_t special_character_idx );
    void (*Hide_Cursor) ( void );
    void (*Show_Cursor) ( void );
    void (*Blink_Cursor) ( void );
    void (*No_Blink_Cursor) ( void );
    void (*Hide_Text) ( void );
    void (*Show_Text) ( void );
    void (*Clear_Text) ( void );
    void (*Turn_Off_Backlight) ( void );
    void (*Turn_On_Backlight) ( void );
} LCD_Commands;

#endif