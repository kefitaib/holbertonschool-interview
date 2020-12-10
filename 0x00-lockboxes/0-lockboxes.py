#!/usr/bin/python3


def canUnlockAll(boxes):
    """ Return True if all boxes can be opened, else return False """

    if not boxes[0] or not isinstance(boxes[0], list):
        return False

    l = [0]
    for i in range(len(boxes)):
        for j in boxes[i]:
            if j not in l and j < len(boxes) and j != i:
                l.append(j)

    return len(l) == len(boxes)
