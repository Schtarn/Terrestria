import os
import sys

from PySide6.QtGui import QIcon

from utils import global_path
from src.utils import font
from src.launcher.graphics.UPSIDE_BAR import upside_bar
from PySide6.QtWidgets import QApplication, QWidget, QGridLayout

global_path.set_proj_abs_path(os.path.abspath(__file__))


class Terrestria_launcher_Window(QWidget):
    def __init__(self):
        super(Terrestria_launcher_Window, self).__init__()
        font.load_font(w=self)

        self.GRID = QGridLayout()
        upside_bar.prepare(w=self)

        self.setWindowTitle("Terrestria_launcher")
        self.setWindowIcon(QIcon("assets/Terrestria_launcher.png"))
        self.setMinimumSize(600, 200)
        self.resize(1280, 720)
        self.initUI()

    def initUI(self):
        with open(
            file=global_path.get_proj_abs_path("assets/stylesheet.txt"), mode="r"
        ) as f:
            self.setStyleSheet(f.read())

        upside_bar.work(w=self)

        # Final
        self.GRID.addLayout(self.UPSIDE_BAR_CONTAINER, 0, 0, 1, 1)
        self.GRID.setRowStretch(self.GRID.rowCount(), 1)
        self.setLayout(self.GRID)
