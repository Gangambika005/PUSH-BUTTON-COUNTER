# PUSH-BUTTON-COUNTER

"COMPANY" : CODTECH IT SOLUTIONS

"NAME" : GANGAMBIKA BK

"INTERN ID" : CT08VCR

"DOMAIN" : EMBEDDED SYSTEMS

"DURATION" : 4 WEEKS

"MENTOR" : NEELA SANTHOSH

"DISCRIPTION" :

Introduction

In this task, a basic embedded system is developed using an Arduino UNO to detect and count the number of times a push button is pressed. The system reads the digital state of the button, increments a counter for each valid press, and displays the result on the Serial Monitor. This task introduces the fundamental concept of reading digital inputs and implementing simple software-based debouncing to ensure accurate readings from mechanical buttons.

Objective :
The main goal of this task is to:

Detect individual push button presses,
Increment a counter each time the button is pressed,
Display the count on the Serial Monitor,
Ensure reliability using a basic debounce mechanism.
This exercise helps build a foundational understanding of digital input handling, which is essential in all embedded system applications involving switches, buttons, and user input devices.

Tools and Components Used :
Arduino UNO R3: Microcontroller board used for executing the code and handling input/output.
Push Button (4-pin): Used to manually trigger digital HIGH input.
10kΩ Resistor: Acts as a pull-down resistor to stabilize the input pin when the button is not pressed.
Breadboard: A solderless platform for assembling the circuit.
Jumper Wires: For making electrical connections.
Arduino IDE: Software used to write, upload, and test the code.
Tinkercad Circuits (optional): Online simulator used for prototyping and verifying circuit behavior.

Working Principle :
The push button is connected to digital pin 2 of the Arduino. A pull-down resistor (10kΩ) is connected between the button's input leg and GND to ensure that when the button is not pressed, the input reads LOW (0V). When the button is pressed, it connects the input pin directly to 5V, changing the input to HIGH (1).

To ensure that only one press is counted at a time, the system compares the current and previous states of the button. The counter is incremented only when the current state is HIGH and the previous state was LOW, indicating a new press event. A simple delay(200) is added after each valid detection to debounce the input — this avoids the bouncing effect that may cause multiple counts from a single press.

Code Explanation :
Here is the code used in the task:

cpp
Copy
Edit
const int buttonPin = 2;
int counter = 0;
int previousState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int currentState = digitalRead(buttonPin);

  if (currentState == HIGH && previousState == LOW) {
    counter++;
    Serial.print("Button Pressed: ");
    Serial.println(counter);
    delay(200); // simple debounce
  }

  previousState = currentState;
}
buttonPin: The digital pin connected to the button.
counter: Stores the total number of button presses.
previousState and currentState: Used to detect a change in the button's state.
delay(200): Introduced after each valid press to reduce bounce effects.
This method is a basic state-change detection technique that ensures only distinct press events are counted.

🧪 Output Verification
When the circuit is run (on Tinkercad or real hardware) and the Serial Monitor is opened, pressing the button results in output like:

less
Copy
Edit
Button Pressed: 1
Button Pressed: 2
Button Pressed: 3
Each new press increments the counter and updates the display. Holding the button down does not increase the count rapidly due to the state-check and the debounce delay.

Applications :
This system, although simple, mirrors real-world applications such as:

Event counters in industrial or public environments.
Digital control panels where buttons are used to input selections or commands.
People counters at entrances/exits.
Menu navigation systems in embedded HMI (Human Machine Interface) designs.
Game controllers and remote input devices.
It also forms the basis for more advanced systems involving interrupts, multiple buttons, or timing-sensitive inputs.

Conclusion
Task 1 provides a solid introduction to digital input handling, debounce logic, and serial communication using Arduino. The code is simple and efficient, making use of a minimal debounce technique with delay() for reliable operation. This exercise helps students understand the real-world challenges of input devices, such as bouncing, and demonstrates a practical solution. It builds a strong foundation for more complex embedded systems projects where stable and accurate input is essential.

"OUTPUT" :

![Image](https://github.com/user-attachments/assets/bf4fa8ed-0f28-4ad9-b2e6-0cc29d900d64)

