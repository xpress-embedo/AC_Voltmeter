/**
 * @file lcd_16x2.h
 * @author Embedded Laboratory
 * @date May 12, 2016
 * @brief LCD Functions.
 */

#ifndef LCD_16x2_H
#define	LCD_16x2_H

#include "config.h"

#define USE_LCD_BUSY_FLAG             /**< Use Busy Bit instead of Delay.*/
#define LCD_ROWS              2u      /**< Total Number of Row in LCD.*/
#define LCD_COLS              16u     /**< Total Number of Column in LCD.*/
#define LCD_BUFFER_LEN (LCD_COLS + 1) /**< No of characters in a row buffer.*/

#ifdef	__cplusplus
extern "C"
{
#endif

#define LCD_DATA              LATD    /**< LCD Data Port.*/
#define LCD_DATA_DIR          TRISD   /**< LCD Data Direction Register.*/
#define LCD_D0                LATD0   /**< LCD Data Line0.*/
#define LCD_D1                LATD1   /**< LCD Data Line1.*/
#define LCD_D2                LATD2   /**< LCD Data Line2.*/
#define LCD_D3                LATD3   /**< LCD Data Line3.*/
#define LCD_D4                LATD4   /**< LCD Data Line4.*/
#define LCD_D5                LATD5   /**< LCD Data Line5.*/
#define LCD_D6                LATD6   /**< LCD Data Line6.*/
#define LCD_D7                LATD7   /**< LCD Data Line7.*/

#define LCD_BUSY_PIN    PORTDbits.RD7 /**< LCD Busy Pin.*/
#define LCD_BUSY_PIN_DIR      TRISD7  /**< LCD Busy Pin Direction.*/
  
#define LCD_RS                LATB2   /**< LCD RS Pin.*/
#define LCD_RS_DIR            TRISB2  /**< LCD RS Direction.*/
#define LCD_RW                LATB4   /**< LCD RW Pin.*/
#define LCD_RW_DIR            TRISB4  /**< LCD RW Direction.*/
#define LCD_EN                LATB5   /**< LCD EN Pin.*/
#define LCD_EN_DIR            TRISB5  /**< LCD EN Direction.*/
  
#define LCD_BACKLIT_PIN       0       /**< LCD Back Light Pin.*/

/* LCD Commands */
#define LCD_16x2_INIT         0x38    /**< Initialize 16x2 Lcd in 8-bit Mode.*/
#define LCD_DISP_ON_CUR_ON    0x0E    /**< LCD Display On Cursor On.*/
#define LCD_DISP_ON_CUR_OFF   0x0C    /**< LCD Display On Cursor Off.*/
#define LCD_DISP_ON_CUR_BLNK  0x0F    /**< LCD Display On Cursor Blink.*/
#define LCD_ENTRY_MODE        0x06    /**< LCD Entry Mode. */
#define LCD_FIRST_ROW         0x80    /**< Move Pointer to First Row.*/
#define LCD_SECOND_ROW        0xC0    /**< Move Pointer to Second Row.*/
#define LCD_CLEAR             0x01    /**< Clear LCD Display.*/

/* LCD Function Prototypes */
void LCD_Init(void);
void LCD_Cmd(uint8_t command);
void LCD_Write(uint8_t Data);
void LCD_Write_Text(char *msg);
void LCD_BackLight_On( void );
void LCD_BackLight_Off( void );
void LCD_Update( void );
uint8_t LCD_Print_Line(uint8_t lcd_line, char *p_lcd_msg);

#ifdef	__cplusplus
}
#endif

#endif	/* LCD_16x2_H */

