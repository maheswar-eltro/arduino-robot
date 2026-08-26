import serial
import time 
import keyboard

arduino = serial.Serial("COM9", 9600)

while True:
    command = 'x'

    if keyboard.is_pressed('w'):
        command = 'w'
    elif keyboard.is_pressed('s'):
        command = 's'
    elif keyboard.is_pressed('a'):
        command = 'a'
    elif keyboard.is_pressed('d'): 
        command = 'd'

    time.sleep(0.05)

    arduino.write(command.encode())


