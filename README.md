# Bluetooth-Controlled Robotic Arm

A six-servo robotic arm controlled from an Android phone over Bluetooth, built with an Arduino, an HC-05 Bluetooth module and a custom MIT App Inventor app. The arm was developed through seven prototype iterations, starting with two push-button controlled servos and ending with six servos controlled wirelessly from a phone.

## How it works
1. The phone app sends short text commands over Bluetooth, for example `R1` or `L3`.
2. The HC-05 module passes the command to the Arduino's serial port.
3. The Arduino reads the command with `Serial.readStringUntil('\n')` and turns the matching servo 3 degrees right (`R`) or left (`L`).
4. Each servo is limited to 0–180 degrees so the arm cannot be damaged.

Small 3-degree steps were chosen during testing because they gave much more precise control than larger steps or sliders.

## Hardware
- Arduino
- 6 servo motors
- HC-05 Bluetooth module
- Breadboard and wires
- Cardboard frame
- Android phone with the control app

## Files
| Path | Contents |
|---|---|
   | `bluetooth_arm.ino` | Final Arduino code |
## Team
Built by a team of five. My role: Arduino programming, Bluetooth integration and the MIT App Inventor control app.
