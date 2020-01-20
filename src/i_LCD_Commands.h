#ifndef I_LCD_COMMANDS_H
#define I_LCD_COMMANDS_H

#include "stdint.h"
#include "E_SPECIAL_CHARACTER.h"

/* Client_Server_Interface */
/* i_LCD_Commands defines operations allowing to command a LCD. */
class i_LCD_Commands {
public :
    virtual void Set_Cursor_Position( uint8_t row_index, uint8_t colomn_index ) = 0 ;
    virtual void Print( char* text ) = 0 ;
    virtual void Print_Special_Character( E_SPECIAL_CHARACTER character) = 0 ;
    virtual void Hide_Cursor( void ) = 0 ;
    virtual void Show_Cursor( void ) = 0 ;
    virtual void Blink_Cursor( void ) = 0 ;
    virtual void No_Blink_Cursor( void ) = 0 ;
    virtual void Hide_Text( void ) = 0 ;
    virtual void Show_Text( void ) = 0 ;
    virtual void Clear_Text( void ) = 0 ;
    virtual void Turn_Off_Backlight( void ) = 0 ;
    virtual void Turn_On_Backlight( void ) = 0 ;
};

#endif