#!/usr/bin/python3


def canUnlockAll(boxes):
    """ Return True if all boxes can be opened, else return False """

    b = boxes
    l = b[0]
    while l:
        x = l.pop()
        if b[x] != -1:
            for i in b[x]:
                if i not in l and b[i] != -1:
                    l.append(i)
            b[x] = -1

    for i in b[1:]:
        if i != -1:
            return False

    return True
