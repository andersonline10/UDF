"""11. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
números a serem lidos. Em seguida, leia n números (conforme o valor informado
anteriormente) e imprima a soma e a média aritmética dos números informados."""

contador = 1
soma = 0

qtdade = int(input("Informe o número que servirá para a quantidade de números das operações de soma e média "
                   "aritmética: "))

num = int(input("Informe o 1o número: "))
soma = soma + num
contador += 1

while contador <= qtdade:
    num = int(input(f"Informe o {contador}o número: "))
    soma = soma + num
    media = soma/num
    contador += 1

print(f"A soma dos números entre 1 e {num} é: {soma}")
print(f"A média aritmética dos números entre 1 e {num} é: {media:.2f}")
