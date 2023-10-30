salario = float(input("O sálario deste funcionário é R$ "))

aumento = salario/100 * 15
print("O aumento de salário será de R$ {} ".format(aumento))

novo_salario = salario + aumento

print("O novo salário do funcionário será R$ {}".format(novo_salario))