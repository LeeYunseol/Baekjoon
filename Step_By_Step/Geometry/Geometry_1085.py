import sys

x, y, w, h = map(int, sys.stdin.readline().split())
east = w - x
west = x
north = h - y
south = y

answer = min(east, west, north, south)
print(answer)