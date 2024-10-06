################################################
# Exercicios de programação em python
# Autor: Israel
################################################

import math


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

print("Este programa calcula a distancia em quilometros de um raio")

raio = float(entrada("Em quantos segundos ouviu o raio?"))
distancia = 340 * raio

print("A distancia é: ", distancia/1000, " quilometros")