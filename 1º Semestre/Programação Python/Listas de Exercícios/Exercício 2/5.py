# Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
# de 3, ou, não é múltiplo de 3

numero = int(input("Digite um número inteiro: "))
if numero % 3 == 0:
    print(f"O número {numero} é múltiplo de 3.")
else:
    print(f"O número {numero} não é múltiplo de 3.")

