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

for qtdade in range(contador, qtdade + 1):
    num = int(input(f"Informe o {contador}o número: "))
    soma = soma + num
    media = soma / qtdade
    contador += 1

print(f"A soma dos {qtdade} números informados é de {soma}")
print(f"A média aritmética dos {qtdade} números informados é de {media:.2f}")
