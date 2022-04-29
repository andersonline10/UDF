""" Ex. 11. Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima
o nome da pessoa mais pesada """

nome_pessoa1 = str(input("Qual o nome da primeira pessoa: "))
peso_pessoa1 = float(input(f"Qual o peso de {nome_pessoa1}? "))
nome_pessoa2 = str(input("Qual o nome da segunda pessoa: "))
peso_pessoa2 = float(input(f"Qual o pessoa de {nome_pessoa2}? "))

if peso_pessoa1 > peso_pessoa2:
    print(f"A pessoa mais pesada é {nome_pessoa1}.")
elif peso_pessoa2 > peso_pessoa1:
    print(f"A pessoa mais pesada é {nome_pessoa2}.")
else:
    print(f"{nome_pessoa1} tem o mesmo peso que {nome_pessoa2}.")
