import os
import sys

from PySide6.QtWidgets import QApplication

from src.server.terrestria_server_gui import Terrestria_Server_Window
from utils import global_path

global_path.set_proj_abs_path(os.path.abspath(__file__))
Terrestria_Server_Q_App = QApplication()
Terrestria_Server_app_GUI = Terrestria_Server_Window()
Terrestria_Server_app_GUI.show()
sys.exit(Terrestria_Server_Q_App.exec())
