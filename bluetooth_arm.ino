#include <Servo.h>

// servos' names
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// servos' initial positions
int pos1 = 90;
int pos2 = 90;
int pos3 = 90;
int pos4 = 90;
int pos5 = 90;
int pos6 = 90;

void setup() {
  // HC-05 Bluetooth module sends commands through the serial port
  Serial.begin(9600);

  // servos' pins
  servo1.attach(5);
  servo2.attach(6);
  servo3.attach(9);
  servo4.attach(10);
  servo5.attach(11);
  servo6.attach(12);

  // write servos' initial positions
  servo1.write(pos1);
  servo2.write(pos2);
  servo3.write(pos3);
  servo4.write(pos4);
  servo5.write(pos5);
  servo6.write(pos6);
}

void loop() {
  // if a command comes from the phone app, read it until the new line
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    // "R" turns a servo 3 degrees right, "L" turns it 3 degrees left
    // the number after the letter is the servo number
    if (command == "R1" && pos1 <= 177) {
      pos1 += 3;
      servo1.write(pos1);
      delay(100);
    } else if (command == "L1" && pos1 >= 3) {
      pos1 -= 3;
      servo1.write(pos1);
      delay(100);
    }

    else if (command == "R2" && pos2 <= 177) {
      pos2 += 3;
      servo2.write(pos2);
      delay(100);
    } else if (command == "L2" && pos2 >= 3) {
      pos2 -= 3;
      servo2.write(pos2);
      delay(100);
    }

    else if (command == "R3" && pos3 <= 177) {
      pos3 += 3;
      servo3.write(pos3);
      delay(100);
    } else if (command == "L3" && pos3 >= 3) {
      pos3 -= 3;
      servo3.write(pos3);
      delay(100);
    }

    else if (command == "R4" && pos4 <= 177) {
      pos4 += 3;
      servo4.write(pos4);
      delay(100);
    } else if (command == "L4" && pos4 >= 3) {
      pos4 -= 3;
      servo4.write(pos4);
      delay(100);
    }

    else if (command == "R5" && pos5 <= 177) {
      pos5 += 3;
      servo5.write(pos5);
      delay(100);
    } else if (command == "L5" && pos5 >= 3) {
      pos5 -= 3;
      servo5.write(pos5);
      delay(100);
    }

    else if (command == "R6" && pos6 <= 177) {
      pos6 += 3;
      servo6.write(pos6);
      delay(100);
    } else if (command == "L6" && pos6 >= 3) {
      pos6 -= 3;
      servo6.write(pos6);
      delay(100);
    }
  }
}
