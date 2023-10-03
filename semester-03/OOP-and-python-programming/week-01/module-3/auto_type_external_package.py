from time import sleep

import pyautogui

sleep(2)
for i in range(0, 3):
    pyautogui.write("My Name Is Sayem", interval=0.25)
    pyautogui.press("enter")
    sleep(1)
