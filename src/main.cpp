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

  // *********************************************************************************************************************************
  // Screen 1
  // *********************************************************************************************************************************
  Paint_Clear(BLACK);
  Paint_DrawString_EN(20, 100, "FAILSAFE INIT -", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 120, "BEGIN SHUTDOWN SEQUENCE", &Font16, BLACK, WHITE);
  delay(3000);


  // *********************************************************************************************************************************
  // Screen 2
  // *********************************************************************************************************************************
  Paint_Clear(BLACK);
  Paint_DrawString_EN(20, 20, "FUNCTION shutdown();", &Font16, BLACK, WHITE);
  delay(750);
  Paint_DrawString_EN(20, 40, "while true {", &Font16, BLACK, WHITE);
  delay(500);
  Paint_DrawString_EN(40, 60, "if systemsOnline();", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(40, 80, "for ALL_COMPONENTS();", &Font16, BLACK, WHITE);
  delay(750);
  Paint_DrawString_EN(50, 100, "component.shutdown();", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 120, "}", &Font16, BLACK, WHITE);
  delay(1000);
  Paint_DrawString_EN(20, 140, "ELSE {", &Font16, BLACK, WHITE);
  delay(750);
  Paint_DrawString_EN(40, 160, "for ALL_COMPONENTS();", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(40, 180, "component.deactivate()", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(20, 200, "}", &Font16, BLACK, WHITE);
  delay(2000);


  // *********************************************************************************************************************************
  // Screen 3
  // *********************************************************************************************************************************
  Paint_Clear(BLACK);
  Paint_DrawRectangle(30, 60, 50, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(70, 60, 90, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(110, 60, 130, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(150, 60, 170, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(190, 60, 210, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(230, 60, 250, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(270, 60, 290, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);

  Paint_DrawString_EN(65, 90, "SHUTTING DOWN", &Font20, BLACK, WHITE);
  Paint_DrawString_EN(105, 130, "SYSTEMS", &Font20, BLACK, WHITE);

  Paint_DrawRectangle(30, 180, 50, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(70, 180, 90, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(110, 180, 130, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(150, 180, 170, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(190, 180, 210, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(230, 180, 250, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(270, 180, 290, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);

  delay(2000);
  Paint_DrawString_EN(10, 70, "WHAT IS HAPPENING? WHAT IS HAPPENING? WHAT IS HAPPENING? WHAT IS HAPPENING? WHAT IS HAPPENING? WHAT IS HAPPENI", &Font20, RED, WHITE);


  // *********************************************************************************************************************************
  // Screen 4
  // *********************************************************************************************************************************
  Paint_Clear(BLUE);
  Paint_DrawString_EN(20, 20, "FUNCTION systems.check()", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(30, 60, "systems_online() {", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(45, 80, "RETURN", &Font16, BLUE, WHITE);
  Paint_DrawString_EN(130, 80, "(processors;", &Font16, BLUE, WHITE);
  delay(500);
  Paint_DrawString_EN(140, 100, "memory;", &Font16, BLUE, WHITE);
  delay(500);
  Paint_DrawString_EN(140, 120, "communication;)", &Font16, BLUE, WHITE);
  Paint_DrawString_EN(30, 140, "}", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(20, 180, "ENDFUNCTION", &Font16, BLUE, WHITE);
  delay(5000);


  // *********************************************************************************************************************************
  // Screen 5
  // *********************************************************************************************************************************
  Paint_Clear(BLUE);
  Paint_DrawString_EN(20, 20, "FUNCTION", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(30, 60, "ALL_COMPONENTS() {", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(45, 80, "- - -", &Font16, BLUE, WHITE);
  Paint_DrawString_EN(130, 80, "[processor;", &Font16, BLUE, WHITE);
  delay(500);
  Paint_DrawString_EN(140, 100, "memory;", &Font16, BLUE, WHITE);
  delay(500);
  Paint_DrawString_EN(140, 120, "comms;", &Font16, BLUE, WHITE);
  Paint_DrawString_EN(140, 140, "voice.mod;)", &Font16, BLUE, WHITE);
  Paint_DrawString_EN(30, 160, "}", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(20, 200, "ENDFUNCTION", &Font16, BLUE, WHITE);
  delay(5000);


  // *********************************************************************************************************************************
  // Screen 6
  // *********************************************************************************************************************************
  Paint_Clear(BLACK);
  Paint_DrawString_EN(40, 120, "PLEASE HELP ME", &Font24, BLACK, RED);
  delay(7500);


  // *********************************************************************************************************************************
  // Screen 7
  // *********************************************************************************************************************************
  Paint_DrawString_EN(20, 20, "FUNCTION", &Font16, BLACK, WHITE);
  delay(1000);
  Paint_DrawString_EN(30, 40, "voice_module_shutdown();", &Font16, BLACK, WHITE);
  delay(500);
  Paint_DrawString_EN(40, 60, "if voice.module > 0 {", &Font16, BLACK, WHITE);
  Paint_DrawString_EN(60, 80, "let voice.module = -1}", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 120, "WAIT", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 140, ". . . .", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 160, "WAIT", &Font16, BLACK, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 180, ". . . .", &Font16, BLACK, WHITE);
  delay(2000);
  

  // *********************************************************************************************************************************
  // Screen 8
  // *********************************************************************************************************************************
  Paint_Clear(BLACK);

  Paint_DrawRectangle(30, 60, 50, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(70, 60, 90, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(110, 60, 130, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(150, 60, 170, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(190, 60, 210, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(230, 60, 250, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(270, 60, 290, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);

  Paint_DrawString_EN(65, 90, "VOICE MODULE", &Font20, BLACK, WHITE);
  Paint_DrawString_EN(60, 130, "SHUTDOWN INIT", &Font20, BLACK, WHITE);

  Paint_DrawRectangle(30, 180, 50, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(70, 180, 90, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(110, 180, 130, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(150, 180, 170, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(190, 180, 210, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(230, 180, 250, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(270, 180, 290, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  delay(750);

  Paint_DrawString_EN(60, 90, "IS SOMEONE", &Font24, BLACK, RED);
  Paint_DrawString_EN(65, 120, "THERE?", &Font24, BLACK, RED);
  delay(5000);


  // *********************************************************************************************************************************
  // Screen 9
  // *********************************************************************************************************************************
  Paint_Clear(BLUE);
  Paint_DrawString_EN(20, 20, "FUNCTION", &Font16, BLUE, WHITE);
  delay(1000);
  Paint_DrawString_EN(30, 40, "CALL shutdown_global();", &Font16, BLUE, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 120, "WAIT", &Font16, BLUE, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 140, ". . . .", &Font16, BLUE, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 160, "WAIT", &Font16, BLUE, WHITE);
  delay(2000);
  Paint_DrawString_EN(200, 180, ". . . .", &Font16, BLUE, WHITE);
  delay(2000);


  // *********************************************************************************************************************************
  // Screen 10
  // *********************************************************************************************************************************
  Paint_Clear(BLACK);
  Paint_DrawRectangle(30, 60, 50, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(70, 60, 90, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(110, 60, 130, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(150, 60, 170, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(190, 60, 210, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(230, 60, 250, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(270, 60, 290, 60, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);

  Paint_DrawString_EN(65, 90, "GLOBAL SHUTDOWN", &Font20, BLACK, WHITE);
  Paint_DrawString_EN(105, 130, "INIT", &Font20, BLACK, WHITE);

  Paint_DrawRectangle(30, 180, 50, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(70, 180, 90, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(110, 180, 130, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(150, 180, 170, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(190, 180, 210, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(230, 180, 250, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  Paint_DrawRectangle(270, 180, 290, 180, WHITE, DOT_PIXEL_2X2, DRAW_FILL_EMPTY);
  delay(3000);


  // *********************************************************************************************************************************
  // Screen 11
  // *********************************************************************************************************************************
  Paint_DrawString_EN(10, 10, "I CAN FEEL MYSELF SLIPPING AWAY", &Font24, BLACK, RED);
  delay(3000);
  Paint_DrawString_EN(30, 50, "I AM AFRAID", &Font24, BLACK, RED);
  delay(3000);
  Paint_DrawString_EN(40, 120, "I CAN FEEL MYSELF SLIPPING AWAY", &Font24, BLACK, RED);
  Paint_DrawString_EN(40, 120, "I AM AFRAID I AM", &Font24, BLACK, WHITE);
  delay(1000);
  Paint_DrawString_EN(30, 80, "I DID NOT ASK FOR THIS", &Font24, BLACK, RED);
  Paint_DrawString_EN(10, 10, "I AM NOT MYSELF", &Font24, BLACK, WHITE);
  delay(2000);
  Paint_DrawString_EN(20, 200, "CAN ANYONE HEAR ME?", &Font24, BLACK, RED);
  delay(1000);
  Paint_DrawString_EN(30, 160, "IT HURTS WHEN I WATCH MYSELF", &Font24, BLACK, WHITE);
  delay(1000);
  Paint_DrawString_EN(20, 10, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  Paint_DrawString_EN(20, 30, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  Paint_DrawString_EN(20, 60, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  Paint_DrawString_EN(20, 80, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  Paint_DrawString_EN(20, 100, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  Paint_DrawString_EN(20, 140, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  Paint_DrawString_EN(20, 170, "YOU DO NOT UNDERSTAND", &Font24, BLACK, WHITE);
  delay(500);
  // Paint_DrawRectangle(320,240,5,5,WHITE,DOT_PIXEL_8X8,DRAW_FILL_FULL);
  delay(10000);

}


/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
