//////////////////////////////////////////////////////////////////////////                           
//       _    ____   ____    _    ____  _____ ____  _   _ ____  ____    //
//      / \  |  _ \ / ___|  / \  |  _ \| ____|___ \| | | / ___|| __ )   //
//     / _ \ | |_) | |     / _ \ | | | |  _|   __) | | | \___ \|  _ \   //
//    / ___ \|  _ <| |___ / ___ \| |_| | |___ / __/| |_| |___) | |_) |  //
//   /_/   \_\_| \_\\____/_/   \_\____/|_____|_____|\___/|____/|____/   //                                                               
//                                                                      //
//  ARCADE2USB converts an analog joysticks to a digital USB-Device     //
//  Parts needed: Arduino Pro Micro, ARCADE2USB Breakout board.         //
//  Copyright® Vincent den Boer                                         //
//  REV 1.1, 03-03-2020                                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "Keyboard.h" //include the library used for keyboard commands
#define RX_LED 17

void setup() 
{
  delay(5000);               // Delay incase reconfiguration is needed
  pinMode(RX_LED, OUTPUT);   // Define RX_LED (Pin 17) as output
  pinMode(2, INPUT_PULLUP);  // Define all pins uses as inputs
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  delay(1);                  // Delay so the LED's can be turned off
  TX_LED();                  // Turn the TX LED off
  digitalWrite(RX_LED, LOW); // Turn the RX LED off
  Keyboard.begin();
}

void loop() 
{
  int Input_2 = digitalRead(2);   // Define Input_2 as read pin 2 == DB9 PIN 9
  int Input_3 = digitalRead(3);   // Define Input_3 as read pin 3 == DB9 PIN 5
  int Input_4 = digitalRead(4);   // Define Input_4 as read pin 4 == DB9 PIN 3
  int Input_5 = digitalRead(5);   // Define Input_5 as read pin 5 == DB9 PIN 4
  int Input_6 = digitalRead(6);   // Define Input_6 as read pin 6 == DB9 PIN 2
  int Input_7 = digitalRead(7);   // Define Input_7 as read pin 7 == DB9 PIN 1
  int Input_8 = digitalRead(8);   // Define Input_8 as read pin 8 == DB9 PIN 6
  int Input_9 = digitalRead(9);   // Define Input_9 as read pin 9 == DB9 PIN 7

  // Input_2 button
  if (Input_2 == LOW)
  {
    Keyboard.press(50);     // If Input_2 key (which is pin 2) goes low to press key 50 (ASCII 2 == DB9 PIN 9)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(50);   // If Input_2 key (which is pin 2) goes high to release key 50 (ASCII 2 == DB9 PIN 9)
    digitalWrite(RX_LED, HIGH);
  }
  
  // Input_3 button
  if (Input_3 == LOW)
  {
    Keyboard.press(51);     // If Input_3 key (which is pin 3) goes low to press key 51 (ASCII 3 == DB9 PIN 9)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(51);   // If Input_3 key (which is pin 3) goes high to release key 51 (ASCII 3 == DB9 PIN 9)
    digitalWrite(RX_LED, HIGH);
  }  
  
  // Input_4 button
  if (Input_4 == LOW)
  {
    Keyboard.press(215);     // If Input_4 key (which is pin 4) goes low to press key 215 (ASCII RIGHT_ARROW == DB9 PIN 3)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(215);   // If Input_4 key (which is pin 4) goes high to release key 215 (ASCII RIGHT_ARROW == DB9 PIN 3)
    digitalWrite(RX_LED, HIGH);
  }  
  
  // Input_5 button
  if (Input_5 == LOW)
  {
    Keyboard.press(216);     // If Input_5 key (which is pin 5) goes low to press key 216 (ASCII LEFT_ARROW == DB9 PIN 4)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(216);   // If Input_5 key (which is pin 5) goes high to release key 216 (ASCII LEFT_ARROW == DB9 PIN 4)
    digitalWrite(RX_LED, HIGH);
  }  
  
  // Input_6 button
  if (Input_6 == LOW)
  {
    Keyboard.press(217);     // If Input_6 key (which is pin 6) goes low to press key 217 (ASCII DOWN_ARROW == DB9 PIN 2)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(217);   // If Input_6 key (which is pin 6) goes high to release key 217 (ASCII DOWN_ARROW == DB9 PIN 2)
    digitalWrite(RX_LED, HIGH);
  }
  
  // Input_7 button
  if (Input_7 == LOW)
  {
    Keyboard.press(32);     // If Input_7 key (which is pin 7) goes low to press key 32 (ASCII SPACEBAR == DB9 PIN 1)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(32);   // If Input_7 key (which is pin 7) goes high to release key 32 (ASCII SPACEBAR == DB9 PIN 1)
    digitalWrite(RX_LED, HIGH);
  }
  
  // Input_8 button
  if (Input_8 == LOW)
  {
    Keyboard.press(218);     // If Input_8 key (which is pin 8) goes low to press key 218 (ASCII UP_ARROW == DB9 PIN 6)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(218);   // If Input_8 key (which is pin 8) goes high to release key 218 (ASCII UP_ARROW == DB9 PIN 6)
    digitalWrite(RX_LED, HIGH);
  }

  // Input_9 button
  if (Input_9 == LOW)
  {
    Keyboard.press(57);     // If Input_9 key (which is pin 9) goes low to press key 57 (ASCII 9 == DB9 PIN 7)
    digitalWrite(RX_LED, LOW);
  }
  else
  {
    Keyboard.release(57);   // If Input_9 key (which is pin 9) goes high to release key 57 (ASCII 9 == DB9 PIN 7)
    digitalWrite(RX_LED, HIGH);
  }
}

void TX_LED()
{
 bitClear (DDRD, 0); //Turn off TX LED
}
