#include <Keyboard.h>



void RUN(char * cmd)
{

  delay(1000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);

 
  Keyboard.print(cmd);


  delay(1000);

  Keyboard.press(KEY_RETURN);

  Keyboard.releaseAll();

}

void setup()
{

  Keyboard.begin(); // 키보드 활성화
  
  Serial.begin(9600); // 시리얼 모니터

  delay(1000);
  
  RUN("%windir%\\system32\\cmd.exe /c calc.exe");
  
}

void loop()
{
  Serial.write("Hello?");
  delay(15000);
}
