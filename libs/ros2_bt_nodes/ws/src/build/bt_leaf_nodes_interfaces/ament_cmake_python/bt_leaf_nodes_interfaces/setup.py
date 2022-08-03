from setuptools import find_packages
from setuptools import setup

setup(
    name='bt_leaf_nodes_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('bt_leaf_nodes_interfaces', 'bt_leaf_nodes_interfaces.*')),
)
