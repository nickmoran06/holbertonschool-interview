#!/usr/bin/python3
"""
canUnlockAll function inside
"""


def canUnlockAll(boxes):
    """
    Method that determines if all the boxes can be opened
    into a list of list
    Return: True if all can be open and false else
    """

    unlock_box = [0]

    for x in unlock_box:
        for y in boxes[x]:
            if y in unlock_box:
                pass
            else:
                unlock_box.append(y)

    if len(unlock_box) == len(boxes):
        return True
    else:
        return False
