# 13.	Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na tela
# a soma dos dois números informados da seguinte forma: "O numeros N e X somados correspondem a Y"

numero1 = int(input("Digite o primeiro número inteiro: "))
numero2 = int(input("Digite o segundo número inteiro: "))
soma = numero1 + numero2

print("A soma dos números %d e %d é " % (numero1, numero2) + "%i" %soma, end=".")
