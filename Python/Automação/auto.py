# Automação

import pyautogui
import time

#pyautogui.click -> Clicar com o mouse
#pyautogui.write -> Escrever um texto
#pyautogui.press -> Apertar uma tecla
#pyautogui.hotkey -> Atalho (combinação de teclas)

pyautogui.PAUSE = 1

pyautogui.press("win")
pyautogui.write("microsoft edge")
pyautogui.press("enter")

link = "https://dlp.hashtagtreinamentos.com/python/intensivao/login"

pyautogui.write(link)
pyautogui.press("enter")