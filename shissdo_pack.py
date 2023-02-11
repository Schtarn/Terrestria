import os
import json

from tools import build
from utils import global_path

global_path.set_proj_abs_path(os.path.abspath(__file__))

with open("config/config.json", "r") as j:
    config = json.load(j)

build.build(
    withconsole=True,
    path=os.path.abspath("Terrestria.py"),
    file_dict=["assets", "config"],
    companyname="Cshtarn",
    product_version=config["version"],
    icon=global_path.get_proj_abs_path("assets/Terrestria.png"),
    plugin_dict=[],
    include_package_dict=[],
)
