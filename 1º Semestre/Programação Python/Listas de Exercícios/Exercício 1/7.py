# 7.	Escreva um programa que solicite ao usuário um número inteiro e um número real e
# ao final apresente na tela os dois números informados formatando com duas casas decimais somente
# o número real da seguinte forma: "Voce informou os numeros N e X.YY"

numero_inteiro = int(input("Informe um número inteiro: "))
numero_real = float(input("Informe um número real: "))
print("Você informou os números", numero_inteiro, "e %.2f" %numero_real, end=".")