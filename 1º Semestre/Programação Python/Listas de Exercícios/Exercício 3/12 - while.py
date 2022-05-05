""" 12. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N
pessoas e ao final apresentar o nome da pessoa mais velha."""

qtdade = int(input("Informe a quantidade de registros: "))
nome_velho = str(0)
idade_velho = 0
contador = 1

while contador <= qtdade:
    nome = input(f"Informe o nome da {contador}a pessoa: ")
    idade = int(input(f"Informe a idade de {nome}: "))
    if idade_velho < idade:
        idade_velho = idade
        nome_velho = nome
    contador += 1

print(f"O nome da pessoa mais velha é {nome_velho} com {idade_velho} anos.")
