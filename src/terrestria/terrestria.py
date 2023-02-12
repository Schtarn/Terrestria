import os
import sys

import pygame
from pygame.locals import *

from utils import global_path

pygame.init()
global_path.set_proj_abs_path(os.path.abspath(__file__))

DEVELOPMENT = True

icon = pygame.image.load(global_path.get_proj_abs_path(path="assets/Terrestria.png"))
pygame.display.set_icon(icon)

if DEVELOPMENT:
    flags = DOUBLEBUF
    screen_width, screen_height = 1280, 720
    screen = pygame.display.set_mode((screen_width, screen_height), flags)
else:
    flags = DOUBLEBUF | HWSURFACE | FULLSCREEN
    screen_width, screen_height = (
        pygame.display.Info().current_w,
        pygame.display.Info().current_h,
    )
    screen = pygame.display.set_mode((screen_width, screen_height), flags)

pygame.display.set_caption("Terrestria")
clock = pygame.time.Clock()
start_time = pygame.time.get_ticks()

mainLoop = True
while mainLoop:
    events = pygame.event.get()
    if events:
        for event in events:
            if event.type == pygame.QUIT:
                mainLoop = False

    dt = clock.tick(60)
    pygame.display.flip()

pygame.quit()
sys.exit()
