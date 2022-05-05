# Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos.

soma = 0
for numero in range(1, 100 + 1):
    soma = soma + numero
print(f"A soma dos 100 primeiros números inteiros é de {soma}.")
