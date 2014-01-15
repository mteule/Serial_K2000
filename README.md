Serial_K2000
============

To drive at least the 2 motors of the little electric car of the lab.
Using the existings Arduino libraries.

Wiring:
-------
The motors should be connected to a H-Bridge L298N.
The documentation for it can be found at this adress:
http://www.ghamon.fr/Downloads/L298NPCBdatasheet.pdf

* wiring for the `` 2 DC Brush Motors `` situation can be seen on page 5.
* wiring for the `` arduino `` can be seen on page 9.
* `` example code `` on page 10. 

PWM:
----
Example code can be found here:
http://arduino.cc/en/Tutorial/PWM
Default frequency is 500Hz.

Serial communication:
-------------------
Example code to pass parameters over the serial port can be found here:
http://arduino.cc/en/Tutorial/ReadASCIIString

Hopefully this example is illustrated with PWM. 

On the L298N datasheet::

    Pins used for the PWM are DIGITAL 9, 10.
    Pins used for the MOTOR DIRECTION are DIGITAL 2, 3, 4, 5.
    
    First motor:  [ENA IN1 IN2] [DIGITAL 9 2 3]
    Second motor: [ENB IN3 IN4] [DIGITAL 10 4 5] 
    
Python interfacing:
------------------
Lots of examples can be found here:
http://playground.arduino.cc/interfacing/python

