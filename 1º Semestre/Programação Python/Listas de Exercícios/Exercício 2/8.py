"""Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade
desse número, caso contrário, imprimir o dobro do número """

numero = float(input("Digite um número: "))
if numero > 20:
    print(f"A metade de {numero:0.2f} é {(numero/2):0.2f}.")
else:
    print(f"O dobro de {numero:0.2f} é {(numero*2):0.2f}.")
