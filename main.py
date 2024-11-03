################################################
# Exercicios de programação em python
# Autor: Israel
################################################

import math
from random import randint, random

# Funções


def entrada(texto):
  r = input('>' + texto)
  return r


#-------------------------#
# Exercicio 1

print('Olá Mundo!')

#-------------------------#
# Exercicio 2

# print('Este programa calcula a area de um triangulo retanglo')

# altura = 15
# base = 3
# area = (altura * base) / 2
# print(area)

#-------------------------#
# Exercicio 3

# nome = entrada('Digite um nome: ')
# print(nome)

#-------------------------#
# Exercicio 4

# x = 1.0
# y = 2.0
# z = 3.0

# x = -x
# y = y - 1
# z = z + x
# z = z + x - y

# print("x =", x, "y =", y, "z =", z)

#-------------------------#
# Exercicio 5

# print("Um resumo sobre você")

# Nome = entrada('Digite seu nome: ')
# Idade = entrada('Digite sua idade: ')
# Altura = entrada('Digite sua altura: ')
# Peso = entrada('Digite seu peso: ')
# Nacionalidade = entrada('Digite sua nacinalidade: ')

# print("Olá! Meu nome é ", Nome, "tenho ", Idade, "anos. Sou do ", Nacionalidade, " e possuo ", Altura, "de altura e ", Peso, "Kg.")

#-------------------------#
# Exercicio 6

# print("Este programa calcula o raio da circunferencia")

# raio = float(entrada("Qual o raio?"))
# Circunferencia = 2 * 3.14 * raio
# print("A circunferencia é: ", Circunferencia)

#-------------------------#
# Exercicio 7

# print("Este programa calcula a area entre dois pontos")

# x1 = float(entrada("Digite o valor de x1: "))
# y1 = float(entrada("Digite o valor de y1: "))
# x2 = float(entrada("Digite o valor de x2: "))
# y2 = float(entrada("Digite o valor de y2: "))

# distancia = math.sqrt((x1 - x2)**2 + (y1 - y2)**2)

# print("A distancia entre os pontos é: ", distancia)

#-------------------------#
# Exercicio 8

# print("Este programa calcula a distancia em quilometros de um raio")

# raio = float(entrada("Em quantos segundos ouviu o raio?"))
# distancia = 340 * raio

# print("A distancia é: ", distancia/1000, " quilometros")

#-------------------------#
# Exercicio 9

# def cont_par(ini, fim):
#   num = ini
#   cp = 0
#   while num <= fim:
#     if num % 2 == 0:
#       cp += 1
#     num += 1
#   return cp

# print(cont_par(1, 5268))

#-------------------------#
# Exercicio 10

# num = input('digite um numero até 10: ')
# soma = 0
# sor = randint(1, 10)
# print(sor)
# while int(num) != sor:
#   soma += sor
#   sor = randint(1, 10)
#   print(sor)

# print('soma:', soma)

#-------------------------#
# Exercicio 11

# x = input('digite um numero: ')
# y = input('digite um numero: ')

# for xLoc in range(int(x)):
#   for yLoc in range(int(y)):
#     print(xLoc, yLoc)

#-------------------------#
# Exercicio 12

# numero = input('digite um numero: ')

# def divisores(num):
#   for i in range(1, num//2+1):
#     if num % i == 0:
#       print(i, 'é divisor de', num)

# divisores(int(numero))

