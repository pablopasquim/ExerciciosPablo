#Digitar o nome e fazer varias formatações

nome = input("Digite seu nome: ").strip()
print("Nome maiúsculo {}".format(nome.upper()))
print("Nome minúsculo {}".format(nome.lower()))
print("Quantidade de letras {}".format(len(nome)- nome.count(" ")))
separa = nome.split()
print("Seu primeiro nome {}, tem {} letras".format(separa[0], len(separa[0])))