#Ativar audio

import pygame
pygame.init()
pygame.mixer.music.load('cr7.mp3')
pygame.mixer.music.play()
pygame.event.wait()