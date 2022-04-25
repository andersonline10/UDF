# 5.	Escreva um programa que solicite ao usuário um número real e ao final apresente na tela
# o número informado formatado com duas casas decimais da seguinte forma: "Voce informou o numero X.YY"

numero_real = float(input("Digite um número real: "))

print("Você informou o número %.2f" %numero_real, end=".")