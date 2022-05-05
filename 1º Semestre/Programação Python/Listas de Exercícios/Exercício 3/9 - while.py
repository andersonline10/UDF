"""9. Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
de vezes que o texto "Hello World!" será impresso na tela, um em cada linha."""

contador = 1
numero = int(input("Informe a quantidade de vezes para imprimir o texto 'Hello World': "))

while contador <= numero:
    print("Hello World!")
    contador += 1
