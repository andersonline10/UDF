# 11.	Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na
# tela o numero informado e na linha de baixo o dobro deste número da seguinte forma:
#    Numero -> X
#    Dobro deste numero -> Y

numero_real = float(input("Digite um número real: "))
dobro_real = numero_real * 2
print("Número -> %.2f\n" %numero_real + "Dobro deste número --> %.2f" %dobro_real)
