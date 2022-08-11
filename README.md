# Unreal-Engine-4-VR-Bike-Simulator
This is a VR simulator project. The simulation is done in Unreal Engine 4.27 VR and I am using 2 ESP32 chips to give the input and output of the simulation

The files in this project includes everything needed to compile and run the simulator in Unreal Engine 4.27. It might work in other versions, but this is not tested.

The simulator was made by me as an internship project at NITK, Surathkal.

Installing the solution:

1. Download Unreal Engine from www.unrealengine.com.

2. Install Unreal Engine with version 4.27

3. Get a copy of the project’s code. Either from the included zip file or from GitHub.

4. Launch the VRsimulator.uproject file. This will compile the project and open it in Unreal Engine.

5. Download the ArduinoIDE files.

Using the solution:

Wireless communication

1. Set up a mosquitto server.

2. Get the IP configuration from CMD.

ESP32

1. Connect your first ESP32 to a KY-040 encoder at pins 4 and 5.

2. Connect your first ESP32 to a potentiometer at pin 34 too.

3. Connect your second ESP32 to a servo motor at pin 18.

4. Make changes to the SSID, password and MQTT address of the code to your specifications

5. Upload the cycle_input code to the first ESP32.

6. Upload the cycle_servo code to the second ESP32.

Unreal Engine 4

1. Run VRsimulator.uproject.

2. Make changes to the IP address in the blueprint of the pawn Vehicle Blueprint.

3. Connect the VR headset to the PC running UE4.

4. Play the simulation in VR preview mode.


Controlling the simulator

1. Use the potentiometer to steer left and right.

2. Rotate the encoder to control the speed of the bicycle.

3. The servo will move in respect to the rotation of the bicycle model in Unreal Engine 4.
