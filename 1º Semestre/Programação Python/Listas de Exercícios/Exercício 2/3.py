""" Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é maior que dez, se é menor que dez, ou se é igual a dez """

numero = float(input("Digite um número real: "))
if numero > 10:
    print(f"O número informado {numero:.2f} é maior do que 10.")
elif numero < 10:
    print(f"O número informado {numero:.2f} é menor do que 10.")
else:
    print("O número informado é igual a 10.")
