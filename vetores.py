################################################
# Exercicios de programação em python
# Autor: Israel
################################################

import math
from random import random

# Funções


def entrada(texto):
  r = input('>' + texto)
  return r


#################
#### VETORES ####
#################

#-------------------------#
# Exercicio 13

# inventario = [
#     [0, 6],
#     [1, 20],
#     [2, 33],
#     [3, 1],
#     [4, 755],
#     [5, 84],
# ]

# def _removeItem(id):
#   inventario.pop(id)

# def _addItem(id, qtd):
#   inventario.append([id, qtd])

# def _getItem(id):
#   return inventario[id]

# print(inventario)
# _removeItem(3)
# print(inventario)

#-------------------------#
# Exercicio 14

# lista = []
# for i in range(32546):
#   if i % 2 == 0:
#     lista.append(i)
# lista.sort(reverse=True)
# print(lista)

#-------------------------#
# Exercicio 15

# x1 = 9
# x2 = 35
# y1 = 10
# y2 = 51
# z1 = 82
# z2 = 24

# x = x2 + x1
# y = y2 + y1
# z = z2 + z1

# print("x:", x1, "+", x2)
# print(x)
# print("y:", y1, "+", y2)
# print(y)
# print("z:", z1, "+", z2)
# print(z)

#-------------------------#
# Exercicio 16

# lista = []
# for i in range(10):
#   lista.append(math.floor(random() * 20 + i))

# teres = []
# c = 0
# for i in lista:
#   if i in teres:
#     pass
#   else:
#     c += 1
#     teres.append(i)

# print(lista)
# print(c)

#-------------------------#
# Exercicio 17

# lista = []
# for i in range(5):
#   lista.append(math.floor(random() * 20 + i))

# for i in range(10):
#   num = int(input())
#   if num in lista:
#     print(lista.index(num))
#   else:
#     print(-1)

# print(lista)

#-------------------------#
# Exercicio 18

# lista = []
# for i in range(50):
#   lista.append(math.floor(random() * 6 + 1))

# c = 0
# for i in lista:
#   if i == 6:
#     c += 1

# print(lista)
# print(c)
# print(c * 100 / 50, "%")
