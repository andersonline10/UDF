# 14.	Escreva um programa que solicite ao usuário dois números reais e ao final apresente na tela
# o produto dos dois números informados da seguinte forma: "O produto dos numeros N e X corresponde a Y"

numero1 = float(input("Informe um número real: "))
numero2 = float(input("Informe outro número real: "))
produto = numero1 * numero2

print("O produto dos números %.2f e %.2f " % (numero1, numero2) + "é %.2f" %produto, end=".")