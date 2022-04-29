# refazer o exercício anterior, solicitando antes o múltiplo a ser testado

multiplo = int(input("Digite o múltiplo a ser testado: "))
numero = int(input("Digite um número inteiro: "))
if numero % multiplo == 0:
    print(f"O número {numero} é múltiplo de {multiplo}.")
else:
    print(f"O número {numero} não é múltiplo de {multiplo}.")
