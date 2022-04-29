"""Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele """

numero1 = int(input("Digite o primeiro número inteiro: "))
numero2 = int(input("Digite o segundo número inteiro: "))

if (numero1 + numero2) > 10:
    print(f"O quadrado da soma de {numero1} com {numero2} é {pow((numero1 + numero2), 2)}.")
else:
    print(f"A metade da soma de {numero1} com {numero2} é {(numero1 + numero2) / 2}.")
