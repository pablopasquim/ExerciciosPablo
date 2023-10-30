#Verificar se o nome da cidade começa com "Santo"

city = str(input("Digite o nome da sua cidade: ")).strip()
print(city[:5] == "Santo")
