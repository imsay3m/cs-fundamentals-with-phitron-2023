from time import sleep

import pyautogui

n = int(input("Enter Number Of Row: "))

sleep(5)
for i in range(1, n + 1):
    for j in range(0, i):
        pyautogui.write("#", interval=0.25)
    pyautogui.press("enter")
    sleep(1)
