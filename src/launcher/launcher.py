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
)


class Terrestria_launcher_Window(QWidget):
    def __init__(self):
        super(Terrestria_launcher_Window, self).__init__()
        font.load_font(w=self)
        with open(global_path.get_proj_abs_path("config/config.json"), "r") as j:
            self.config = json.load(j)

        self.GRID = QGridLayout()

        self.ServerStatusBox = QHBoxLayout()
        self.Server_Online_People_Number = QLabel("Online: --")
        self.Server_Online_People_Number.setFont(QFont(self.Pretendard_SemiBold, 20))
        self.Server_Uptime = QLabel("Uptime: --")
        self.Server_Uptime.setFont(QFont(self.Pretendard_SemiBold, 20))

        self.LoginBox = QHBoxLayout()
        self.LoginBox_ID_Label = QLabel("ID:")
        self.LoginBox_ID_Label.setFont(QFont(self.Pretendard_SemiBold, 20))
        self.LoginBox_ID_Input = QLineEdit()
        self.LoginBox_ID_Input.setFont(QFont(self.Pretendard_Regular, 20))

        self.LoginBox_PW_Label = QLabel("Passwords:")
        self.LoginBox_PW_Label.setFont(QFont(self.Pretendard_SemiBold, 20))
        self.LoginBox_PW_Input = QLineEdit()
        self.LoginBox_PW_Input.setEchoMode(QLineEdit.Password)
        self.LoginBox_PW_Input.setFont(QFont(self.Pretendard_Regular, 20))

        self.FOOTER_BOX = QHBoxLayout()

        self.FOOTER_LABEL = QLabel(
            f"Copyright (c) 2023- Cshtarn :: Terrestria v{self.config['version']}"
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

        self.setWindowTitle("Terrestria_launcher")
        self.setWindowIcon(
            QIcon(global_path.get_proj_abs_path("assets/Terrestria.png"))
        )
        self.setMinimumSize(600, 200)
        self.resize(1280, 720)
        self.initUI()

    def initUI(self):
        with open(
            file=global_path.get_proj_abs_path("assets/stylesheet.txt"), mode="r"
        ) as f:
            self.setStyleSheet(f.read())

        self.ServerStatusBox.addWidget(self.Server_Online_People_Number)
        self.ServerStatusBox.addWidget(self.Server_Uptime)

        self.LoginBox.addWidget(self.LoginBox_ID_Label)
        self.LoginBox.addWidget(self.LoginBox_ID_Input)
        self.LoginBox.addWidget(self.LoginBox_PW_Label)
        self.LoginBox.addWidget(self.LoginBox_PW_Input)

        self.FOOTER_BOX.addWidget(self.FOOTER_LABEL)
        self.FOOTER_BOX.addWidget(self.FOOTER_GITHUB_BUTTON)
        self.FOOTER_BOX.addWidget(self.FOOTER_WEB_BUTTON)
        self.FOOTER_BOX.addWidget(self.FOOTER_DISCORD_BUTTON)

        # Final
        self.GRID.addLayout(self.ServerStatusBox, 0, 0, 1, 1)
        self.GRID.addLayout(self.LoginBox, 1, 0, 1, 1)
        self.GRID.setRowStretch(2, 1)
        self.GRID.addLayout(self.FOOTER_BOX, 3, 0, 1, 1)
        self.setLayout(self.GRID)

    def FOOTER_GITHUB_CLICKED(self):
        webbrowser.open("https://github.com/Cshtarn/Terrestria")

    def FOOTER_DISCORD_CLICKED(self):
        webbrowser.open("https://discord.gg/NXwVfdcygM")
