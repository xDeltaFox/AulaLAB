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


def bubble_sort(vet):
  c = 0
  n = len(vet)
  for i in range(n - 1):
    for j in range(n - i - 1):
      if vet[j] > vet[j + 1]:
        c += 1
        vet[j], vet[j + 1] = vet[j + 1], vet[j]
  return c


def insertion_sort(vet):
  c = 0
  n = len(vet)
  for i in range(1, n):
    key = vet[i]
    j = i - 1
    while j >= 0 and key < vet[j]:
      c += 1
      vet[j + 1] = vet[j]
      j -= 1
    vet[j + 1] = key
  return c


def selection_sort(vet):
  c = 0
  n = len(vet)
  for i in range(n):
    min_idx = i
    for j in range(i + 1, n):
      if vet[j] < vet[min_idx]:
        c += 1
        min_idx = j
    vet[i], vet[min_idx] = vet[min_idx], vet[i]
  return c


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
# Exercicio 15 VETORES 1

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
# Exercicio 16 VETORES 2

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
# Exercicio 17 VETORES 3

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
# Exercicio 18 VETORES 4

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

#-------------------------#
# Exercicio 19 VETORES 5

# vet = []
# pos = []
# semdup = []

# for i in range(20):
#   n = random() * i
#   if random() > .5:
#     n = -n

#   vet.append(math.floor(n))

# for i in vet:
#   if i > 0:
#     pos.append(i)

# for i in pos:
#   if i not in semdup:
#     semdup.append(i)

# print(vet)
# print(pos)
# print(semdup)

#-------------------------#
# Exercicio 20 VETORES 6

print("insertion")

pos = []

for i in range(10):
  pos.append(math.floor(random() * i))

print(pos)
nu = insertion_sort(pos)
print(pos)
print(nu)

print("selection")

pos = []

for i in range(10):
  pos.append(math.floor(random() * i))

print(pos)
nu = selection_sort(pos)
print(pos)
print(nu)

print("bubble")

pos = []

for i in range(10):
  pos.append(math.floor(random() * i))

print(pos)
nu = bubble_sort(pos)
print(pos)
print(nu)
