import serial
import time 
import keyboard

arduino = serial.Serial("COM9", 9600)



while True:

    w = keyboard.is_pressed('w')
    a = keyboard.is_pressed('a')
    s = keyboard.is_pressed('s')
    d = keyboard.is_pressed('d')
    stop = keyboard.is_pressed('space')

    left = 0
    right = 0
    if stop:
        left = 0
        right = 0

    elif w and d:
        left = 255
        right = 120

    elif w and a:
        left = 120
        right = 255

    elif s and a:
        left = -120
        right = -255
    
    elif s and d:
        left = -255
        right = -120

    elif w:
        left = 255
        right = 225

    elif s:
        left = -255
        right = -225

    elif a: 
        left = -255
        right = 225

    elif d:
        left = 255
        right = -225

    values = f"{left},{right}\n"   
    arduino.write(values.encode())

    time.sleep(0.05)

    


