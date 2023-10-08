import math

ângulo = float(input("Digite o ângulo: "))
sen = math.sin(math.radians(ângulo))
print("O ângulo {} tem o seno de {:.2f}".format(ângulo,sen))
cos = math.cos(math.radians(ângulo))
print("O ângulo {} tem o cosseno de {:.2f}".format(ângulo,cos))
tan = math.tan(math.radians(ângulo))
print("O ângulo {} tem a tangente de {:.2f}".format(ângulo, tan))