#include <kipr/botball.h>

int main()
{
  printf("Hello World\n");
  enable_servos();
  set_servo_position(3,460);//arm up
  msleep(500);
  motor(3,100);
  motor(0,100);//forward
  msleep(2000);
  motor(3,20);//left
  motor(0,100);  
  msleep(1600);
  motor(3,100);
  motor(0,100);//forward
  msleep(2800);
  motor(0,10);
  motor(3,80);//right
  msleep(1400);
  motor(3,80);
  motor(0,80);//forward
  msleep(1200);
  motor(3,5);//left
  msleep(200);
  set_servo_position(3,645);
  msleep(1000);
  set_servo_position(0,1254);
  msleep(1000);
  set_servo_position(3,645);
  msleep(500);
  motor(3,-80);
  motor(0,-80);
  msleep(1000);
  set_servo_position(3,752);
  return 0;
}