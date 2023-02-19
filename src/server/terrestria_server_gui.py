import json
import webbrowser

from PySide6.QtGui import QIcon, QFont

from utils import global_path
from src.utils import font
from PySide6.QtWidgets import (
    QWidget,
    QGridLayout,
    QHBoxLayout,
    QLabel,
    QLineEdit,
    QPushButton,
    QPlainTextEdit,
)


class Terrestria_Server_Window(QWidget):
    def __init__(self):
        super(Terrestria_Server_Window, self).__init__()
        font.load_font(w=self)
        with open(global_path.get_proj_abs_path("config/config.json"), "r") as j:
            self.config = json.load(j)

        self.GRID = QGridLayout()

        self.Option_Box = QHBoxLayout()

        self.Server_Host_Label = QLabel("Host:")
        self.Server_Host_Label.setFont(QFont(self.Pretendard_SemiBold, 20))
        self.Server_Host_Input = QLineEdit("127.0.0.1")
        self.Server_Host_Input.setFont(QFont(self.Pretendard_Regular, 20))

        self.Server_Port_Label = QLabel("Port:")
        self.Server_Port_Label.setFont(QFont(self.Pretendard_SemiBold, 20))
        self.Server_Port_Input = QLineEdit("30000")
        self.Server_Port_Input.setFont(QFont(self.Pretendard_Regular, 20))

        self.Start_Button = QPushButton("Start")
        self.Start_Button.setFont(QFont(self.Pretendard_Regular, 20))
        self.Start_Button.clicked.connect(lambda: self.START_BTN_CLICKED())

        self.Stop_Button = QPushButton("Stop")
        self.Stop_Button.setFont(QFont(self.Pretendard_Regular, 20))
        self.Stop_Button.clicked.connect(lambda: self.STOP_BTN_CLICKED())

        self.CMD = QPlainTextEdit()
        self.CMD.setReadOnly(True)

        self.FOOTER_BOX = QHBoxLayout()

        self.FOOTER_LABEL = QLabel(
            f"Copyright (c) 2023- Cshtarn :: Terrestria_Server v{self.config['version']}"
        )
        self.FOOTER_LABEL.setFont(QFont(self.Pretendard_Bold, 10))

        self.FOOTER_GITHUB_BUTTON = QPushButton("Github")
        self.FOOTER_GITHUB_BUTTON.setFont(QFont(self.Pretendard_Regular, 10))
        self.FOOTER_GITHUB_BUTTON.clicked.connect(lambda: self.FOOTER_GITHUB_CLICKED())

        self.FOOTER_WEB_BUTTON = QPushButton("Web")
        self.FOOTER_WEB_BUTTON.setFont(QFont(self.Pretendard_Regular, 10))

        self.FOOTER_DISCORD_BUTTON = QPushButton("Discord")
        self.FOOTER_DISCORD_BUTTON.setFont(QFont(self.Pretendard_Regular, 10))
        self.FOOTER_DISCORD_BUTTON.clicked.connect(
            lambda: self.FOOTER_DISCORD_CLICKED()
        )

        self.setWindowTitle("Terrestria_Server")
        self.setWindowIcon(
            QIcon(global_path.get_proj_abs_path("assets/Terrestria_Server.png"))
        )
        self.setMinimumSize(600, 200)
        self.resize(1280, 720)
        self.initUI()

    def initUI(self):
        with open(
            file=global_path.get_proj_abs_path("assets/stylesheet.txt"), mode="r"
        ) as f:
            self.setStyleSheet(f.read())

        self.Option_Box.addWidget(self.Server_Host_Label)
        self.Option_Box.addWidget(self.Server_Host_Input)
        self.Option_Box.addWidget(self.Server_Port_Label)
        self.Option_Box.addWidget(self.Server_Port_Input)
        self.Option_Box.addWidget(self.Start_Button)
        self.Option_Box.addWidget(self.Stop_Button)

        self.FOOTER_BOX.addWidget(self.FOOTER_LABEL)
        self.FOOTER_BOX.addWidget(self.FOOTER_GITHUB_BUTTON)
        self.FOOTER_BOX.addWidget(self.FOOTER_WEB_BUTTON)
        self.FOOTER_BOX.addWidget(self.FOOTER_DISCORD_BUTTON)

        # Final
        self.GRID.addLayout(self.Option_Box, 0, 0, 1, 1)
        self.GRID.addWidget(self.CMD, 1, 0, 1, 1)
        self.GRID.addLayout(self.FOOTER_BOX, 2, 0, 1, 1)
        self.setLayout(self.GRID)

    def START_BTN_CLICKED(self):
        self.Start_Button.setEnabled(False)
        self.Stop_Button.setEnabled(True)

    def STOP_BTN_CLICKED(self):
        self.Start_Button.setEnabled(True)
        self.Stop_Button.setEnabled(False)

    def FOOTER_GITHUB_CLICKED(self):
        webbrowser.open("https://github.com/Cshtarn/Terrestria")

    def FOOTER_DISCORD_CLICKED(self):
        webbrowser.open("https://discord.gg/NXwVfdcygM")
