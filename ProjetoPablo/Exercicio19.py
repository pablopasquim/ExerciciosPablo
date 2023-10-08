import random

p1 = str(input("Primeira Pessoa: "))
p2 = str(input("Segunda Pessoa: "))
p3 = str(input("Terceira Pessoa: "))
p4 = str(input("Quarta Pessoa: "))

lista = [p1,p2,p3,p4]
pessoa_escolhida = random.choice(lista)
print("A pessoa escolhida foi {}".format(pessoa_escolhida))