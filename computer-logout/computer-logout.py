import serial
import pyautogui

# Change this to the correct serial port
serial_port = serial.Serial("COM3", 9600)

while True:
    try:
        # Read data from Arduino
        data = serial_port.readline().decode("utf-8").strip()

        if data == "logout_signal":
            print("Logging out from the computer")

            # Simulate the keyboard shortcut for logging out from the computer
            pyautogui.hotkey("winleft", "d")
            pyautogui.hotkey("ctrl", "esc")
            pyautogui.write("shutdown -l")

    except KeyboardInterrupt:
        break

serial_port.close()