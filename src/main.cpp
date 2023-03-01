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

  Paint_DrawString_EN(20, 100, "FAILSAFE INIT -", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 120, "BEGIN SHUTDOWN SEQUENCE", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_Clear(WHITE);
  delay(3000);
  Paint_Clear(BLACK);
  Paint_DrawString_EN(20, 20, "FUNCTION shutdown();", &Font16, BLACK, WHITE);
  delay(1000);
  Paint_DrawString_EN(20, 40, "while true;", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 60, "if systemsOnline();", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 80, "FOR all_components();", &Font16, BLACK, WHITE);
  delay(1000);
  Paint_DrawString_EN(20, 100, "component.shutdown()", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_DrawString_EN(20, 120, "ELSE;", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 140, "FOR all_components();", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 160, "component.deactivate()", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_DrawRectangle(20, 20, 300, 20, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 30, 300, 30, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 40, 300, 40, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 50, 300, 50, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 60, 300, 60, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 70, 300, 70, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 80, 300, 80, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 90, 300, 90, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 100, 300, 100, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 110, 300, 110, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 120, 300, 120, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 130, 300, 130, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 140, 300, 140, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 150, 300, 150, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 160, 300, 160, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(20, 170, 300, 170, RED,  DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawString_EN(20, 180, "I don't want to go...", &Font16, RED, WHITE);
  delay(10000);

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
