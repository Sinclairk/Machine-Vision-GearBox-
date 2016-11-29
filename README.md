# Machine-Vision-GearBox
A community built robot that has vision and voice capabilities, follow the building conversation [Online](http://forum.gearbox.co.ke/t/image-processing-and-object-tracking-robot/125/55)

The Robot will consist of the following;
1. An AGV (Automated Guided Vehicle)

2. ARM(5 DOF and already constructed)

The AGV will consist of:

- Raspberry Pi 3 as its main processing unit

- Raspberry Pi camera mounted on servo swivel on the front of the AGV

- Two Gyroscopes (MPU6050), one mounted on the swivel of the camera and the other on the AGV its self.

- A motor driver for driving each motor (4 motors in total)

- An atmega328 controller board to control the navigation.

- Four ultrasonic sensors (each on either of four sides)

The arm consists of
-  Six servo motors for articulation

-  An atmega328 controller board

### Software:
1. Raspbian Jeezy OS

2. Opencv for image processing

3. ROS for robot operation

4. Pocketsphinx for voice commands

5. Arduino programming for sensor readings and navigation

### Operations:
1. The camera will first locate and lock on an object as instructed based on colour and shape (e.g Find a green Ball)

2. After a target has been locked on, the gyro on the camera swivel will pass the location of the target to the AGV controller.

3. The AGV controller will use this coordinates to move to the location of the target.

4. The ultra sonic sensor on the front of the AGV will help the robot to move just close enough to the position of the target for the arm to pick the object.

5. When the robot its close enough, it will pass a command to the arm controller for the arm to pick the object.

6. The robot will make a 180 degrees turn and move back to the initial starting point to deliver the object (i.e Green Ball)

7. Another command can be given from there
