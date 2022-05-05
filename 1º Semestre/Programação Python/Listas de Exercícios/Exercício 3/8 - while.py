# Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos.

numero = 1
soma = 0

while numero <= 100:
    soma = soma + numero
    numero += 1

print(f"A soma dos primeiros 100 números inteiros positivos é de {soma}.")
