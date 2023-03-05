#include <Arduino.h>

#include <SPI.h>
#include "./LCD_Driver.h"
#include "./GUI_Paint.h"
#include "./image.h"


void setup()
{
  
  Config_Init();
  LCD_Init();
  LCD_Clear(0xffff);
  Paint_NewImage(LCD_WIDTH, LCD_HEIGHT, 0, BLACK);
  Paint_Clear(BLACK);

  // Paint_DrawTime(125, 125, 00:00:, &Font24, WHITE, RED);
  
  // Paint_DrawString_EN(45, 50,"Happy Tuesday, it's nice out.", &Font16, BLUE, WHITE);
  // Paint_DrawPoint(125, 125, RED, DOT_PIXEL_8X8, DOT_FILL_RIGHTUP);
  // Paint_DrawRectangle(125, 10, 225, 58, RED,  DOT_PIXEL_8X8,DRAW_FILL_EMPTY);


  // Paint_DrawString_EN(30, 10, "123", &Font24, YELLOW, RED); 
  // Paint_DrawLine(125, 10, 225, 58, MAGENTA,   DOT_PIXEL_2X2,LINE_STYLE_SOLID);
  // Paint_DrawCircle(150,100, 25, BLUE,   DOT_PIXEL_2X2,   DRAW_FILL_EMPTY);
  // Paint_DrawFloatNum (5, 150 ,987.654321,4,  &Font20,    WHITE,   LIGHTGREEN);
}
void loop()
{

// x = 320 y = 240

  // Screen 1
  // Paint_Clear(BLACK);
  // Paint_DrawString_EN(20, 100, "FAILSAFE INIT -", &Font16, BLACK, WHITE);
  // Paint_DrawString_EN(20, 120, "BEGIN SHUTDOWN SEQUENCE", &Font16, BLACK, WHITE);
  // delay(3000);

  // // Screen 2
  // Paint_Clear(BLACK);
  // Paint_DrawString_EN(20, 20, "FUNCTION shutdown();", &Font16, BLACK, WHITE);
  // delay(750);
  // Paint_DrawString_EN(20, 40, "while true {", &Font16, BLACK, WHITE);
  // delay(500);
  // Paint_DrawString_EN(40, 60, "if systemsOnline();", &Font16, BLACK, WHITE);
  // Paint_DrawString_EN(40, 80, "for ALL_COMPONENTS();", &Font16, BLACK, WHITE);
  // delay(750);
  // Paint_DrawString_EN(50, 100, "component.shutdown();", &Font16, BLACK, WHITE);
  // Paint_DrawString_EN(20, 120, "}", &Font16, BLACK, WHITE);
  // delay(1000);
  // Paint_DrawString_EN(20, 140, "ELSE {", &Font16, BLACK, WHITE);
  // delay(750);
  // Paint_DrawString_EN(40, 160, "for ALL_COMPONENTS();", &Font16, BLACK, WHITE);
  // Paint_DrawString_EN(40, 180, "component.deactivate()", &Font16, BLACK, WHITE);
  // Paint_DrawString_EN(20, 200, "}", &Font16, BLACK, WHITE);
  // delay(2000);

  // Screen 3
  // Paint_Clear(BLACK);
  Paint_DrawLine(20, 60, 20, 300, WHITE, DOT_PIXEL_4X4, LINE_STYLE_DOTTED);

  // Paint_DrawString_EN(20, 40, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 60, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 80, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 100, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 120, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 140, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 160, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 180, "What is happening to me?", &Font16, RED, WHITE);
  // Paint_DrawString_EN(20, 200, "What is happening to me?", &Font16, RED, WHITE);

  // Paint_DrawString_EN(20, 20, "FUNCTION systems_online() {", &Font16, BLUE, WHITE);
  // delay(1000);
  // Paint_DrawString_EN(30, 40, "RETURN (processors.status == ONLINE", &Font16, BLUE, WHITE);
  // delay(1000);
  // // Paint_DrawString_EN(40, 60, "memory.status == ONLINE", &Font16, BLUE, WHITE);
  // delay(1000);
  // // Paint_DrawString_EN(40, 80, "communication.status == ONLINE)", &Font16, BLUE, WHITE);
  // delay(1000);
  // // Paint_DrawString_EN(20, 100, "ENDFUNCTION }", &Font16, BLUE, WHITE);
  // delay(1000);
  // Paint_DrawString_EN(20, 20, "I'm not myself.", &Font16, RED, WHITE);
  // delay(1000);
  // Paint_DrawString_EN(20, 60, "I am not me", &Font16, RED, WHITE);
  // delay(1000);


  // Paint_DrawString_EN(10, 10,"but can think think", &Font16, BLACK, WHITE);
  // Paint_DrawString_EN(10, 30,"think think think think think think", &Font16, BLACK, WHITE);
  // Paint_DrawImage(gImage_70X70, 20, 80, 70, 70); 
  // delay(1000);
  // Paint_DrawRectangle(10, 0, 10, 240, RED,  DOT_PIXEL_8X8, DRAW_FILL_EMPTY);
  // Paint_DrawRectangle(40, 0, 40, 240, RED,  DOT_PIXEL_8X8, DRAW_FILL_EMPTY);
  // delay(1000);

    // if (millis() < 10000) {
    //   Paint_DrawString_EN(10, 10,"user.022 - - - - - -", &Font16, BLACK, WHITE);
    // }
    // if (millis() < 12000) {
    //   Paint_DrawString_EN(10, 10,"loading . . . .", &Font16, BLACK, WHITE);
    // }
    // if (millis() < 14000) {
    //   Paint_DrawString_EN(10, 10, "retinal scan : : : init", &Font16, BLACK, WHITE);
    // }

    // else {
    // Paint_DrawImage(gImage_70X70, 20, 80, 70, 70); 
    // }
}


/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
