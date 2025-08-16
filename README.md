# RGB Mood Light with Buzzer Alert (Arduino)

This project combines an **RGB LED** and a **buzzer** with a button input.

* The **RGB LED** cycles through different colors (mood lighting).
* When the **button is pressed**, the **buzzer plays an alert** sound.

It’s a fun beginner-friendly project to learn about **PWM control**, **digital inputs**, and **tone generation** with Arduino.

## Folder Structure

RGB_MoodLight-with-BuzzerAlert/
│── src/
│   └── rgb.ino    
│── videos/
│   └── arduino_video.mp4       
│   └── tinkercad_video.mp4 
│── README.md             
│── LICENSE               

## Components Used

* 1 × Arduino Uno (or compatible)
* 1 × RGB LED (common cathode or common anode)
* 3 × Resistors (220Ω or 330Ω for R, G, B pins)
* 1 × Piezo Buzzer
* 1 × Push Button
* Breadboard & Jumper Wires

## How It Works

1. The **RGB LED** is connected to PWM pins of the Arduino, allowing smooth fading through colors.
2. A **push button** is used as a trigger input.
3. When the button is pressed, the **buzzer activates** and plays an alert sound.
4. When the button is not pressed, the **RGB LED cycles through colors** continuously, creating a mood light effect.

## How to Run

1. Connect the circuit as per the wiring diagram.
2. Upload the code to your Arduino.
3. The RGB LED will cycle through colors.
4. Press the button → The LED turns off and the buzzer plays an alert sound.

## License

This project is licensed under the **MIT License**.
You are free to use, modify, and distribute it with proper attribution.

## ‍Author

Catherine Bugarin
