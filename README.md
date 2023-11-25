### Traffic light (Arduino)
<p>
This Arduino code sets up a three-light traffic signal (red, yellow, and green) using LEDs connected to pins 10, 9, and 8 on the board. The traffic signal operates in a specific cycle within the loop() function, where each light stays on for 2 seconds before switching to the next:
</p>


- Initially, it turns on the red LED and turns off the others.
- Then, it turns off the red LED and turns on the green LED.
- Afterward, it turns off the green LED and turns on the yellow LED.
- The cycle repeats.
<p>
This code is basic, establishing a sequence of operation to simulate a simple traffic light. Each light remains on for an equal duration before transitioning to the next, creating a sequential light change similar to a standard traffic signal.

You can connect LEDs to pins 10, 9, and 8 on your Arduino board to observe the traffic light operation using this code. Moreover, if you want to add extra features like buttons to simulate a real traffic light, adjust the waiting times, or implement other functionalities, you can expand upon this existing code.
</p>

**Members:**
- Sarith Chamorro
- Jefferson Viracucha
