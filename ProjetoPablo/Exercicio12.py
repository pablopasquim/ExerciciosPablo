preço = float(input("Digite o preço R$: "))



desconto = preço/100 * 5


print("O total do desconto é R$:{}".format(desconto))



total =  preço - desconto



print("O preço R$:{} menos o desconto R$: {}, o valor total é R${}".format(preço, desconto, total))