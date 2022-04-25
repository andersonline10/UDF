# Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
# número informado é positivo, negativo ou nulo (zero)

numero = float(input("Digite um número real: "))
if numero > 0:
    print("O número informado é positivo.")
else:
    if numero < 0:
        print("O número informado é negativo.")
    else:
        print("O número informado é nulo.")

