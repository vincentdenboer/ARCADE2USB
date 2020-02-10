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
//  REV 1.1, 10-02-2020                                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "Keyboard.h" //include the library used for keyboard commands test

void setup() 
{
  delay(5000);              // Delay incase reconfiguration is needed
  pinMode(2, INPUT_PULLUP); // Define all pins uses as inputs
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
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
  }
  else
  {
    Keyboard.release(50);   // If Input_2 key (which is pin 2) goes high to release key 50 (ASCII 2 == DB9 PIN 9)
  }
  
  // Input_3 button
  if (Input_3 == LOW)
  {
    Keyboard.press(51);     // If Input_3 key (which is pin 3) goes low to press key 51 (ASCII 3 == DB9 PIN 9)
  }
  else
  {
    Keyboard.release(51);   // If Input_3 key (which is pin 3) goes high to release key 51 (ASCII 3 == DB9 PIN 9)
  }  
  
  // Input_4 button
  if (Input_4 == LOW)
  {
    Keyboard.press(52);     // If Input_4 key (which is pin 4) goes low to press key 52 (ASCII 4 == DB9 PIN 3)
  }
  else
  {
    Keyboard.release(52);   // If Input_4 key (which is pin 4) goes high to release key 52 (ASCII 4 == DB9 PIN 3)
  }  
  
  // Input_5 button
  if (Input_5 == LOW)
  {
    Keyboard.press(53);     // If Input_5 key (which is pin 5) goes low to press key 53 (ASCII 5 == DB9 PIN 4)
  }
  else
  {
    Keyboard.release(53);   // If Input_5 key (which is pin 5) goes high to release key 53 (ASCII 5 == DB9 PIN 4)
  }  
  
  // Input_6 button
  if (Input_6 == LOW)
  {
    Keyboard.press(54);     // If Input_6 key (which is pin 6) goes low to press key 54 (ASCII 6 == DB9 PIN 2)
  }
  else
  {
    Keyboard.release(54);   // If Input_6 key (which is pin 6) goes high to release key 54 (ASCII 6 == DB9 PIN 2)
  }
  
  // Input_7 button
  if (Input_7 == LOW)
  {
    Keyboard.press(55);     // If Input_7 key (which is pin 7) goes low to press key 55 (ASCII 7 == DB9 PIN 1)
  }
  else
  {
    Keyboard.release(55);   // If Input_7 key (which is pin 7) goes high to release key 55 (ASCII 7 == DB9 PIN 1)
  }
  
  // Input_8 button
  if (Input_8 == LOW)
  {
    Keyboard.press(56);     // If Input_8 key (which is pin 8) goes low to press key 56 (ASCII 8 == DB9 PIN 6)
  }
  else
  {
    Keyboard.release(56);   // If Input_8 key (which is pin 8) goes high to release key 56 (ASCII 8 == DB9 PIN 6)
  }

  // Input_9 button
  if (Input_9 == LOW)
  {
    Keyboard.press(57);     // If Input_9 key (which is pin 9) goes low to press key 57 (ASCII 9 == DB9 PIN 7)
  }
  else
  {
    Keyboard.release(57);   // If Input_9 key (which is pin 9) goes high to release key 57 (ASCII 9 == DB9 PIN 7)
  }
}
