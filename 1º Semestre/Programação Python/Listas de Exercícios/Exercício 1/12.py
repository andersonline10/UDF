# 12.	Reescrever o programa anterior apresentando o quadrado e o cubo do número informado.

numero_real = float(input("Digite um número real: "))
dobro_real = numero_real * 2
quadrado_real = numero_real ** 2
cubo_real = numero_real ** 3
print("Número -> %.2f\n" %numero_real + "Dobro deste número --> %.2f" %dobro_real)
print("Quadrado deste número -> %.2f\n" %quadrado_real + "Cubo deste número --> %.2f" %cubo_real)