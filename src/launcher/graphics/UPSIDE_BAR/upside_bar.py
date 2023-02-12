from PySide6.QtGui import QFont, QIcon
from PySide6.QtWidgets import (
    QSizePolicy,
    QVBoxLayout,
    QHBoxLayout,
    QPushButton,
    QLabel,
    QWidget,
)

from utils import global_path


def prepare(w):
    w.UPSIDE_BAR_CONTAINER = QVBoxLayout()
    w.UPSIDE_BAR = QHBoxLayout()
    w.UPSIDE_BAR_LABEL = QLabel("Stocking")
    w.UPSIDE_BAR_SETTINGS_BUTTON = QPushButton()
    w.UPSIDE_BAR_END_LINE = QWidget()


def work(w):
    w.UPSIDE_BAR_LABEL.setFont(QFont(w.Pretendard_SemiBold, 20))
    w.UPSIDE_BAR.addWidget(w.UPSIDE_BAR_LABEL)

    w.UPSIDE_BAR.addStretch(1)

    w.UPSIDE_BAR_SETTINGS_BUTTON.setIcon(
        QIcon(global_path.get_proj_abs_path("assets/icons/ionicons/settings.svg"))
    )
    w.UPSIDE_BAR.addWidget(w.UPSIDE_BAR_SETTINGS_BUTTON)

    ####################################################################################################################
    w.UPSIDE_BAR_CONTAINER.addLayout(w.UPSIDE_BAR)

    w.UPSIDE_BAR_END_LINE.setFixedHeight(1)
    w.UPSIDE_BAR_END_LINE.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Fixed)
    w.UPSIDE_BAR_END_LINE.setStyleSheet("background-color: #ffffff;")

    w.UPSIDE_BAR_CONTAINER.addWidget(w.UPSIDE_BAR_END_LINE)
