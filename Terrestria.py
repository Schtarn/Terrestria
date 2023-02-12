import os
import sys

from PySide6.QtWidgets import QApplication

from src.launcher.launcher import Terrestria_launcher_Window
from utils import global_path

global_path.set_proj_abs_path(os.path.abspath(__file__))
Terrestria_launcher_Q_App = QApplication()
Terrestria_launcher_app_GUI = Terrestria_launcher_Window()
Terrestria_launcher_app_GUI.show()
sys.exit(Terrestria_launcher_Q_App.exec())
