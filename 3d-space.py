import math

class Coord3D:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

def length(p):
    vector = math.sqrt(p.x ** 2 + p.y ** 2 + p.z ** 2)
    return vector

if __name__ == "__main__":
    pointP = Coord3D(10, 20, 30)
    print(length(pointP))  # would print 37.4166
