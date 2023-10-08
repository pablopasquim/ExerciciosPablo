import random

p1 = str(input("Primeira Pessoa: "))
p2 = str(input("Segunda Pessoa: "))
p3 = str(input("Terceira Pessoa: "))
p4 = str(input("Quarta Pessoa: "))

lista = [p1,p2,p3,p4]

random.shuffle(lista)
print("A ordem de apresentação será ")
print(lista)