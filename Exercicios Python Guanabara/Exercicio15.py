km = float(input("Digite a quantidade de KM percorrido: "))
dias = int(input("Digite a quantidade de dias que foi alugado o carro: "))

dias_preço = dias * 60
km_preço = km * 0.15
total = km_preço + dias_preço

print("O carro foi alugado por {} dias e foi rodado {} KM, então o preço a ser pago será: R$: {:.2f}".format(dias,km,total))
