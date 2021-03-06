//generated by Duckyspark https://github.com/toxydose/Duckyspark

#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76

void setup() {

DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0);
// REM Target: WINDOWS VISTA/7
// REM Encoder V2.4
// REM Using the run command for a broader OS base. 
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("cmd /Q /D /T:7F /F:OFF /V:ON /K"));
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(750);
DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_RIGHT);
DigiKeyboard.print(F("M"));
DigiKeyboard.KEY_ARROW_DOWN);
DigiKeyboard.REPEAT 100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}


void loop() {

}

